#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int A, B, C, N;
	cin >> A >> B >> C >> N;
	bool able = false;
	for (int i = 0; i <= N/A; i++)
	{
		for (int j = 0; j <= N/B; j++)
		{
			for (int k = 0; k <= N/C; k++)
			{
				int tmp = A * i + B * j + C * k;
				if (tmp == N) {
					able = true;
					break;
				}
			}
			if (able) break;
		}
		if (able) break;
	}
	if (able) cout << 1;
	else cout << 0;
	return 0;
}