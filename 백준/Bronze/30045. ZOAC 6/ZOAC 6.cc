#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, cnt = 0;
	string input;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		size_t f1 = input.find("01"), f2 = input.find("OI");
		if (f1 != string::npos || f2 != string::npos) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}