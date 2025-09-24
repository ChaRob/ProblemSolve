#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int d, n, s, p;
		cin >> d >> n >> s >> p;
		int parallelizeTime = d + n * p;
		int serialTime = n * s;
		if (parallelizeTime < serialTime)
			cout << "parallelize\n";
		else if (parallelizeTime > serialTime)
			cout << "do not parallelize\n";
		else
			cout << "does not matter\n";
	}
	return 0;
}