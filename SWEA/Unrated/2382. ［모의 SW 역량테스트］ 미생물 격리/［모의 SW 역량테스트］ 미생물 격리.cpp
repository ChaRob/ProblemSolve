#include<iostream>
#include<vector>
#include<deque>
using namespace std;

int res;
int direction[5][2] = { {0,0},{-1,0},{1,0},{0,-1},{0,1} };
deque<vector<int>> microbe, microbe_end;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T, n, m, k, tmp;
	cin >> T;
	for (int test = 1; test <= T; test++) {
		cin >> n >> m >> k;
		res = 0;
		vector<int> microbe_info;
		for (int i = 0; i < k; i++)
		{
			microbe_info.clear();
			for (int j = 0; j < 4; j++)
			{
				cin >> tmp;
				microbe_info.push_back(tmp);
			}
			microbe.push_back(microbe_info);
		}
		int dir;
		for (int t = 0; t < m; t++)
		{
			size_t size = microbe.size();
			int area[100][100][4] = { 0 };
			for (int idx = 1; idx < size + 1; idx++)
			{
				microbe_info = microbe.front();
				microbe.pop_front();
				dir = microbe_info[3];
				microbe_info[0] += direction[dir][0];
				microbe_info[1] += direction[dir][1];
				if (microbe_info[0] == 0 || microbe_info[0] == n - 1 || microbe_info[1] == 0 || microbe_info[1] == n - 1) {
					microbe_info[2] /= 2;
					switch (dir)
					{
					case 1:
						microbe_info[3] = 2;
						break;
					case 2:
						microbe_info[3] = 1;
						break;
					case 3:
						microbe_info[3] = 4;
						break;
					case 4:
						microbe_info[3] = 3;
						break;
					default:
						break;
					}
				}
				int x = 0;
				while (area[microbe_info[0]][microbe_info[1]][x]) {
					x++;
				}
				area[microbe_info[0]][microbe_info[1]][x] = idx;
				microbe_end.push_back(microbe_info);
			}
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (area[i][j][1]) {
						int sum = microbe_end[area[i][j][0]-1][2];
						int max_num = sum, max_idx = 0;
						dir = microbe_end[area[i][j][0]-1][3];
						for (int x = 1; x < 4; x++)
						{
							if (area[i][j][x]) {
								sum += microbe_end[area[i][j][x] - 1][2];
								if (max_num < microbe_end[area[i][j][x] - 1][2]) {
									max_num = microbe_end[area[i][j][x] - 1][2];
									dir = microbe_end[area[i][j][x] - 1][3];
								}
								microbe_end[area[i][j][x] - 1][2] = 0;
							}
						}
						microbe_end[area[i][j][0] - 1][2] = sum;
						microbe_end[area[i][j][0] - 1][3] = dir;
					}
				}
			}

			while (!microbe_end.empty()) {
				microbe_info = microbe_end.front();
				microbe_end.pop_front();
				if (microbe_info[2] != 0) {
					microbe.push_back(microbe_info);
				}
			}
		}
		while (!microbe.empty()) {
			microbe_info = microbe.front();
			microbe.pop_front();
			res += microbe_info[2];
		}
		cout << "#" << test << " " << res << "\n";
	}
	return 0;
}