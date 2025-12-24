#include <iostream>
#include <vector>
using namespace std;

struct Solider
{
	int coord;
	int range = 0;
};

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<Solider> soliders(n);
	for (int i = 0; i < n; i++)
	{
		cin >> soliders[i].coord;
	}
	bool isReached = true;
	if (n > 1)
	{
		for (int i = 0; i < n-1; i++)
		{
			cin >> soliders[i].range;
		}
		int reach = soliders[0].coord + soliders[0].range;
		for (int i = 1; i < n; i++)
		{
			if (soliders[i].coord > reach)
			{
				isReached = false;
				break;
			}
			reach = max(reach, soliders[i].coord + soliders[i].range);
		}
	}
	if (isReached)
		cout << "권병장님, 중대장님이 찾으십니다";
	else
		cout << "엄마 나 전역 늦어질 것 같아";
	return 0;
}