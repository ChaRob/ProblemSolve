#include <iostream>
#include <deque>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, order, x;
	cin >> n;
	deque<int> dque;
	for (int i = 0; i < n; i++)
	{
		cin >> order;
		switch (order)
		{
		case 1:
			cin >> x;
			dque.push_front(x);
			break;
		case 2:
			cin >> x;
			dque.push_back(x);
			break;
		case 3:
			if (dque.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << dque.front() << "\n";
				dque.pop_front();
			}
			break;
		case 4:
			if (dque.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << dque.back() << "\n";
				dque.pop_back();
			}
			break;
		case 5:
			cout << dque.size() << "\n";
			break;
		case 6:
			if (dque.empty()) {
				cout << "1\n";
			}
			else {
				cout << "0\n";
			}
			break;
		case 7:

			if (dque.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << dque.front() << "\n";
			}
			break;
		case 8:
			if (dque.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << dque.back() << "\n";
			}
			break;
		default:
			break;
		}
	}
	return 0;
}