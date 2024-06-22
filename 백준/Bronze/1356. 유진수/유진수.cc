#include<iostream>
#include<string.h>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string n, ans = "NO";
	cin >> n;
	if (n.length() > 1) {
		for (int i = 1; i < n.length(); i++)
		{
			string left, right;
			long long leftRes = 1, rightRes = 1;

			left = n.substr(0, i);
			right = n.substr(i);

			for (int i = 0; i < left.length(); i++)
			{
				leftRes *= (left[i] - '0');
			}
			for (int i = 0; i < right.length(); i++)
			{
				rightRes *= (right[i] - '0');
			}
			if (leftRes == rightRes) {
				ans = "YES";
				break;
			}
		}
	}
	cout << ans;
	return 0;
}