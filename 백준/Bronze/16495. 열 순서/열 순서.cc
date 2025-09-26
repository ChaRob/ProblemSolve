#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string s;
	long long sum = 0;
	cin >> s;
	for(int i = 0; i < s.length() - 1; i++)
	{
		sum += (s[i] - 'A' + 1) * pow(26, s.length() - i - 1);
	}
	sum += (s[s.length() - 1] - 'A' + 1);
	cout << sum;
	return 0;
}