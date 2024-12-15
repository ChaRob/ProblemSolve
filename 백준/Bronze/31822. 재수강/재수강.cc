#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string standard, input;
	cin >> standard;
	int n, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (standard.substr(0, 5) == input.substr(0, 5)) cnt++;
	}
	cout << cnt;
	return 0;
}