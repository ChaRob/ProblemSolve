#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	vector<int> plate = { 0, 0, 0 };
	for (int i = 0; i < 3; i++)
	{
		cin >> plate[i];
	}
	sort(plate.begin(), plate.end());
	cout << plate[1];
	
	return 0;
}