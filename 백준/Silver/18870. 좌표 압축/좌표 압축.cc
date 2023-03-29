#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> coordinate;

vector<int> compress(const vector<int> &coordinate) {
	vector<int> v = coordinate;
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	return v;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	long int x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		coordinate.push_back(x);
	}
	vector<int> pressed = compress(coordinate);
	for (int i = 0; i < n; i++) {
		int j = lower_bound(pressed.begin(), pressed.end(), coordinate[i]) - pressed.begin();
		cout << j << " ";
	}

	return 0;
}