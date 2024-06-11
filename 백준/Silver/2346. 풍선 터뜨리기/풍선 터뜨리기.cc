#include <iostream>
using namespace std;

struct balloon
{
	int paper;
	bool erased;
};

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, cnt, idx;
	cin >> n;
	cnt = n;
	balloon* balloons = new balloon[n];
	for (int i = 0; i < n; i++)
	{
		cin >> balloons[i].paper;
		balloons[i].erased = false;
	}
	int nextDir = balloons[0].paper;
	balloons[0].erased = true;
	cnt -= 1;
	cout << "1 ";
	idx = 0;
	while (cnt > 0)
	{
		if (nextDir == 0) {
			balloons[idx].erased = true;
			nextDir = balloons[idx].paper;
			cout << idx + 1 << " ";
			cnt -= 1;
		}
		else if (nextDir > 0) {
			idx++;
			if (idx == n) idx = 0;
			if (!balloons[idx].erased) {
				nextDir -= 1;
			}
		}
		else {
			idx--;
			if (idx < 0) idx = n - 1;
			if (!balloons[idx].erased) {
				nextDir += 1;
			}
		}
	}
	delete[] balloons;
	return 0;
}