#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	vector<int> w, k;
	int tmp;
	for (int i = 0; i < 10; i++)
	{
		cin >> tmp;
		w.push_back(tmp);
	}
	for (int i = 0; i < 10; i++)
	{
		cin >> tmp;
		k.push_back(tmp);
	}
	sort(w.begin(), w.end(), greater<int>());
	sort(k.begin(), k.end(), greater<int>());
	cout << w[0] + w[1] + w[2] << " " << k[0] + k[1] + k[2];
	return 0;
}