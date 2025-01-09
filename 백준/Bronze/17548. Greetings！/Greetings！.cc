#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string input;
	int cnt;
	cin >> input;
	cnt = input.size() - 2;
	cout << 'h';
	for (int i = 0; i < cnt * 2; i++)
	{
		cout << 'e';
	}
	cout << 'y';
	return 0;
}