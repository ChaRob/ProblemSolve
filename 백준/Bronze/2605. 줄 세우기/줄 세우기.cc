#include<iostream>
#include<vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<int> out;
	vector<int> store;
	for (int i = 1; i <= n; i++)
	{
		int order;
		cin >> order;
		while (order > 0) {
			store.push_back(out.back());
			out.pop_back();
			order--;
		}
		out.push_back(i);
		while (!store.empty()) {
			out.push_back(store.back());
			store.pop_back();
		}
	}
	for (int i = 0; i < out.size(); i++)
	{
		cout << out[i] << " ";
	}
	return 0;
}