#include<iostream>
using namespace std;

int minCnt = 999;
int hp[61][61][61];

void backtrack(int scv1, int scv2, int scv3, int n, int nowAttackCnt) {
	if (scv1 <= 0 && scv2 <= 0 && scv3 <= 0) {
		minCnt = (minCnt > nowAttackCnt) ? nowAttackCnt : minCnt;
		return;
	}
	if (scv1 < 0) scv1 = 0;
	if (scv2 < 0) scv2 = 0;
	if (scv3 < 0) scv3 = 0;

	if (hp[scv1][scv2][scv3] <= nowAttackCnt && hp[scv1][scv2][scv3] != 0) return;
	hp[scv1][scv2][scv3] = nowAttackCnt;

	backtrack(scv1 - 9, scv2 - 3, scv3 - 1, n, nowAttackCnt + 1);
	backtrack(scv1 - 9, scv2 - 1, scv3 - 3, n, nowAttackCnt + 1);
	backtrack(scv1 - 3, scv2 - 9, scv3 - 1, n, nowAttackCnt + 1);
	backtrack(scv1 - 3, scv2 - 1, scv3 - 9, n, nowAttackCnt + 1);
	backtrack(scv1 - 1, scv2 - 9, scv3 - 3, n, nowAttackCnt + 1);
	backtrack(scv1 - 1, scv2 - 3, scv3 - 9, n, nowAttackCnt + 1);
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int* scv = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> scv[i];
	}
	backtrack(scv[0], scv[1], scv[2], n, 0);
	
	cout << minCnt;
	return 0;
}