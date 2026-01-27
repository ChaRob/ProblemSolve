#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<int> oddVec, evenVec;
	for (int i = 0; i < n; i++)
	{
		int m;
		cin >> m;
		if (m % 2)
			oddVec.push_back(m);
		else
			evenVec.push_back(m);
	}
	sort(oddVec.begin(), oddVec.end());
	sort(evenVec.begin(), evenVec.end());
	int ans = (oddVec.size() > evenVec.size()) ? 1 : 2;
	int oddIndex = 0, evenIndex = 0;
	while (true)
	{
		if (ans % 2 && ans != oddVec[oddIndex++])
			break;
		else if (ans % 2 == 0 && ans != evenVec[evenIndex++])
			break;
		ans += 2;
	}
	cout << ans;
	return 0;
}