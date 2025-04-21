#include <iostream>
using namespace std;

const float PI = 3.14159265358979323846;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		float a1, p1, r1, p2;
		cin >> a1 >> p1 >> r1 >> p2;
		float d1 = a1 / p1;
		float a2 = PI * r1 * r1;
		float d2 = a2 / p2;
		if (d1 > d2)
		{
			cout << "Slice of pizza\n";
		}
		else
		{
			cout << "Whole pizza\n";
		}
	}
	return 0;
}