#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Coord
{
	int x;
	int y;
};

bool Compare(Coord a, Coord b)
{
	if (a.x > b.x) return true;
	else if (a.x < b.x) return false;
	else
	{
		if (a.y >= b.y) return true;
		else return false;
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<Coord> coords;
	for (int i = 0; i < n; i++)
	{
		Coord coord;
		cin >> coord.x >> coord.y;
		coords.push_back(coord);
	}
	sort(coords.begin(), coords.end(), Compare);
	vector<Coord> nextCoords;
	for (int i = 0; i < n; i++)
	{
		Coord coord;
		cin >> coord.x >> coord.y;
		nextCoords.push_back(coord);
	}
	sort(nextCoords.begin(), nextCoords.end(), Compare);
	cout << nextCoords[0].x - coords[0].x << " " << nextCoords[0].y - coords[0].y;
	return 0;
}