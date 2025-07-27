#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	string res;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		char c;
		cin >> c;
		res += c;
	}
	for (int i = 0; i < n; i++)
	{
		char c;
		cin >> c;
		if (res[i] == c) cnt++;
	}
	cout << cnt;
	return 0;
}