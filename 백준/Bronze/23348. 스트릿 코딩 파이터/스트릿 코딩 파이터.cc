#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b, c;
	cin >> a >> b >> c;
	int n;
	cin >> n;
	int maxPoint = 0;
	for (int i = 0; i < n; i++)
	{
		int ap, bp, cp, point = 0;
		for (int j = 0; j < 3; j++)
		{
			cin >> ap >> bp >> cp;
			point += ap * a + bp * b + cp * c;
		}
		if (point > maxPoint)
			maxPoint = point;
	}
	cout << maxPoint;
	return 0;
}