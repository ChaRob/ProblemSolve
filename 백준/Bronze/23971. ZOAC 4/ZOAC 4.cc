#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int h, w, n, m;
	cin >> h >> w >> n >> m;
	int row = (int)(ceil((float)h / (float)(n + 1))), col = (int)(ceil((float)w / (float)(m + 1)));
	cout << row * col;
	return 0;
}