#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string input;
	cin >> input;
	int pos = input.find("JOI"), cnt = 0;
	while (pos != string::npos)
	{
		cnt++;
		pos = input.find("JOI", pos+3);
	}
	cout << cnt << "\n";
	pos = input.find("IOI"); cnt = 0;
	while (pos != string::npos)
	{
		cnt++;
		pos = input.find("IOI", pos + 2);
	}
	cout << cnt;
	return 0;
}