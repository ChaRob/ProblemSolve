#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	vector<int> n;
	string k;
	for (int i = 0; i < 3; i++)
	{
		int num;
		cin >> num;
		n.push_back(num);
	}
	sort(n.begin(), n.end());
	cin >> k;
	for (int i = 0; i < 3; i++)
	{
		cout << n[k[i] - 'A'] << " ";
	}
	return 0;
}