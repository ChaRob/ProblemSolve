#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, k, room = 0;
	cin >> n >> k;
	int student[6][2] = {};
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		student[b-1][a]++;
	}
	for (int i = 0; i < 6; i++)
	{
		room += student[i][0] / k + student[i][1] / k;
		room += (student[i][0] % k > 0) ? 1 : 0;
		room += (student[i][1] % k > 0) ? 1 : 0;
	}
	cout << room;
	return 0;
}