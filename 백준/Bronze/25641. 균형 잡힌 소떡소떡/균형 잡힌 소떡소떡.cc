#include <iostream>
#include <deque>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, tn = 0, sn = 0;
	cin >> n;
	deque<char> dq;
	for (int i = 0; i < n; i++)
	{
		char c;
		cin >> c;
		if (c == 't') tn++;
		else		  sn++;
		dq.push_back(c);
	}
	while (tn != sn)
	{
		char c = dq.front();
		dq.pop_front();
		if (c == 't')
			tn--;
		else
			sn--;
	}
	for (int i = 0; i < dq.size(); i++)
	{
		cout << dq[i];
	}
	return 0;
}