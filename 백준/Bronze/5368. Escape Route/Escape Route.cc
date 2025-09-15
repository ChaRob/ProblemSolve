#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	fixed(cout);
	for (int t = 0; t < n; t++)
	{
		int m;
		cin >> m;
		vector<vector<char>> arr(m, vector<char>(m));
		vector<pair<int, int>> planets;
		pair<int, int> ship, minPlanet;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> arr[i][j];
				if (arr[i][j] == 's')
					ship = { i, j };
				else if (arr[i][j] == 'p')
				{
					planets.push_back({i, j});
				}
			}
		}
		double min_dist = 1e9;
		for (int i = 0; i < planets.size(); i++)
		{
			pair<int, int> planet = planets[i];
			double dist = sqrt(pow(ship.first - planet.first, 2) + pow(ship.second - planet.second, 2));
			if (dist < min_dist)
			{
				min_dist = dist;
				minPlanet = planet;
			}
		}
		cout << "(" << ship.first << "," << ship.second << "):(" << minPlanet.first << "," << minPlanet.second << "):" << setprecision(2) << min_dist << "\n";
	}
	return 0;
}