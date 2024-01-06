#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	vector<int> time;
	for (int i = 0; i < 3; i++)
	{
		int t;
		cin >> t;
		time.push_back(t);
	}
	sort(time.begin(), time.end());
	if (time[0] == time[1] || time[1] == time[2] || time[0] + time[1] == time[2]) {
		cout << "S";
	}
	else {
		cout << "N";
	}
	return 0;
}