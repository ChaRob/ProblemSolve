#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int N, m, M, T, R, time, exTime = 0, pulse = 0;
	cin >> N >> m >> M >> T >> R;
	if (m + T > M) time = -1;
	else
	{
		time = 0;
		pulse = m;
		while (exTime < N)
		{
			if (pulse + T <= M) {
				exTime++;
				pulse += T;
			}
			else {
				pulse -= R;
				if (pulse < m) pulse = m;
			}
			time++;
		}
	}
	cout << time;
	return 0;
}