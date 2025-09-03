#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int* binus = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> binus[i];
	}
	int point = 0;
	for (int i = 0; i < n; i++)
	{
		int oposite;
		cin >> oposite;
		if (binus[i] > oposite)
		{
			point+=3;
		}
		else if (binus[i] == oposite)
		{
			point++;
		}
	}
	cout << point;
	delete[] binus;
	return 0;
}