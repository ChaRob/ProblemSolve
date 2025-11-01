#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

double Factorial(int n)
{
	double result = 1.0;
	if (n >= 2)
	{
		for (int i = 2; i <= n; i++)
		{
			result *= i;
		}
	}
	return result;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	double e = 0;
	cout << "n e\n- -----------\n";
	for (int n = 0; n < 10; n++)
	{
		e += 1.0 / Factorial(n);
		if (n < 3)
			cout << n << " " << e << "\n";
		else
			cout << n << " " << fixed << setprecision(9) << e << "\n";
	}
	return 0;
}