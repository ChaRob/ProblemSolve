#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	for (int a = 2; a <= 100; a++)
	{
		for (int b = 2; b < a; b++)
		{
			for (int c = b; c < a; c++)
			{
				for (int d = c; d < a; d++)
				{
					if (pow(a, 3) == pow(b, 3) + pow(c, 3) + pow(d, 3))
						cout << "Cube = " << a << ", Triple = (" << b << "," << c << "," << d << ")\n";
				}
			}
		}
	}
	return 0;
}