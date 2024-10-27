#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b, c;
	string ans;
	int next;
	while (true)
	{
		cin >> a >> b >> c;
		if (a == 0 && b==0 && c==0) break;
		if (c - b == b - a) {
			ans = "AP ";
			next = c + (b - a);
		}
		else { 
			ans = "GP ";
			next = c * (b / a);
		}
		cout << ans << next << "\n";
	}
	return 0;
}