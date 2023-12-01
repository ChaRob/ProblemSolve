#include<iostream>
#include<map>
using namespace std;
typedef long long ll;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	ll input;
	cin >> n;
	map<ll, int> integer = {};
	map<ll, int>::iterator iter;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		iter = integer.find(input);
		if (iter == integer.end()) {
			integer.insert(make_pair(input, 1));
		}
		else {
			integer[input]++;
		}
	}
	iter = integer.begin();
	ll target = static_cast<ll>(1) << 62;
	int maxCnt = -1;
	while (iter != integer.end()) {
		ll nowint = (*iter).first;
		int nowCnt = (*iter).second;
		if (maxCnt < nowCnt || (maxCnt == nowCnt && target > nowint)) {
			target = nowint;
			maxCnt = nowCnt;
		}
		
		iter++;
	}
	cout << target;
	return 0;
}