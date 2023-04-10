#include<iostream>
using namespace std;

unsigned short coordinate[101][101];
int direct[4][2] = { {1,0},{0,-1},{-1,0},{0,1} };

void dragon_curve(pair<int,int> stack[], int &ptr) {
	int x = stack[ptr].first, y = stack[ptr].second;
	for (int i = ptr - 1; i >= 0; i--)
	{
		int new_x = x - (stack[i].second - y);
		int new_y = (stack[i].first - x) + y;
		stack[++ptr] = make_pair(new_x,new_y);
	}
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, cnt = 0;
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		int x, y, d, g, ptr = 1;
		pair<int, int> stack[2000];
		cin >> x >> y >> d >> g;
		stack[0] = make_pair(x, y);
		stack[1] = make_pair(x + direct[d][0], y + direct[d][1]);
		while (g) {
			dragon_curve(stack, ptr);
			g--;
		}
		for (size_t i = 0; i <= ptr; i++)
		{
			int w = stack[i].first, z = stack[i].second;
			coordinate[w][z] = 1;
		}
	}
	for (size_t i = 0; i < 100; i++)
	{
		for (size_t j = 0; j < 100; j++)
		{
			if (coordinate[i][j] && coordinate[i][j + 1] && coordinate[i + 1][j] && coordinate[i + 1][j + 1]) {
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}