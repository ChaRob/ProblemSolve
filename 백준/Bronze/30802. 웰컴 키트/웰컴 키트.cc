#include <iostream>
using namespace std;

int main()
{
	int n, t, p;
	int person[6];
	int tCnt = 0, pCnt = 0, pSm = 0;
	cin >> n;
	for (int i = 0; i < 6; i++)
	{
		cin >> person[i];
	}
	cin >> t >> p;
	for (int i = 0; i < 6; i++)
	{
		tCnt += person[i] / t;
		if (person[i] % t > 0) tCnt++;
	}
	pCnt = n / p;
	pSm = n % p;
	cout << tCnt << "\n" << pCnt << " " << pSm;
	return 0;
}