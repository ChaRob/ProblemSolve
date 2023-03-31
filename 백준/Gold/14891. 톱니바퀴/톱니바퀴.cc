#include<iostream>
#include<deque>
using namespace std;

deque<char> gear[5];

void RollGear(int rollgear, int dir) {
	char tmp;
	if (dir == 1) {
		tmp = gear[rollgear].back();
		gear[rollgear].pop_back();
		gear[rollgear].push_front(tmp);
	}
	else {
		tmp = gear[rollgear].front();
		gear[rollgear].pop_front();
		gear[rollgear].push_back(tmp);
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	char tmp;
	int k, rollgear, dir, res = 0;
	for (int i = 1; i < 5; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> tmp;
			gear[i].push_back(tmp);
		}
	}
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> rollgear >> dir;
		bool rolled[5] = { false };
		int tmpdir;
		deque<pair<int, int>> que, sq;
		que.push_back(make_pair(rollgear, dir));
		sq.push_back(make_pair(rollgear, dir));
		rolled[rollgear] = true;
		while (!que.empty()) {
			rollgear = que[0].first;
			dir = que[0].second;
			que.pop_front();
			if (rollgear + 1 <= 4 && !rolled[rollgear + 1] && gear[rollgear][2] != gear[rollgear + 1][6]) {
				if (dir == 1) {
					tmpdir = -1;
				}
				else {
					tmpdir = 1;
				}
				rolled[rollgear + 1] = true;
				que.push_back(make_pair(rollgear + 1, tmpdir));
				sq.push_back(make_pair(rollgear + 1, tmpdir));
			}
			if (rollgear - 1 >= 1 && !rolled[rollgear - 1] && gear[rollgear][6] != gear[rollgear - 1][2]) {
				if (dir == 1) {
					tmpdir = -1;
				}
				else {
					tmpdir = 1;
				}
				rolled[rollgear - 1] = true;
				que.push_back(make_pair(rollgear - 1, tmpdir));
				sq.push_back(make_pair(rollgear - 1, tmpdir));
			}
		}
		while (!sq.empty()) {
			rollgear = sq[0].first;
			dir = sq[0].second;
			sq.pop_front();
			RollGear(rollgear, dir);
		}
	}
	for (int i = 1; i < 5; i++) {
		if (gear[i][0] == '1') {
			switch (i)
			{
			case 1:
				res++;
				break;
			case 2:
				res += 2;
				break;
			case 3:
				res += 4;
				break;
			case 4:
				res += 8;
				break;
			default:
				break;
			}
		}
	}
	cout << res;
	return 0;
}