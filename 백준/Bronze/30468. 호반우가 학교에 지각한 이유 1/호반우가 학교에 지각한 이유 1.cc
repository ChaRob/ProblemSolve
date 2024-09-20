#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int str, dex, Int, luk, n;
	cin >> str >> dex >> Int >> luk >> n;
	int sum = str + dex + Int + luk;
	cout << (((sum - n * 4) < 0) ? n * 4 - sum : 0);
	return 0;
}