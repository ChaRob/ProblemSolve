#include <iostream>
#include <string>
using namespace std;

string channel[100];

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, k1Pos = 0, k2Pos = 0;
	cin >> n;
	string res;
	for (int i = 0; i < n; i++)
	{
		cin >> channel[i];
		if (channel[i] == "KBS1") k1Pos = i;
		else if (channel[i] == "KBS2") k2Pos = i;
	}
	if (k1Pos > k2Pos) k2Pos++;
	res = string(k1Pos, '1') + string(k1Pos, '4') + string(k2Pos, '1') + string(k2Pos - 1, '4');
	cout << res;
	return 0;
}