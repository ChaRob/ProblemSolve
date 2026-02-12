#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Order
{
	int table;
	int time;
	Order(int _table, int _time)
	{
		table = _table;
		time = _time;
	}
};

bool Compare(const Order& _a, const Order& _b)
{
	if (_a.time == _b.time)
		return _a.table < _b.table;
	return _a.time < _b.time;
}

void PrintOrder(const vector<Order>& _orders)
{
	if (_orders.size() == 0)
	{
		cout << "sleep\n";
		return;
	}
	for (Order order : _orders)
	{
		cout << order.table << " ";
	}
	cout << "\n";
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	vector<Order> orders;
	for (int i = 0; i < n; i++)
	{
		string command;
		cin >> command;
		if (command == "order")
		{
			int table, time;
			cin >> table >> time;
			orders.push_back(Order(table, time));
		}
		else if (command == "sort")
			sort(orders.begin(), orders.end(), Compare);
		else if (command == "complete")
		{
			int table;
			cin >> table;
			for (auto it = orders.begin(); it != orders.end(); ++it)
			{
				if (it->table == table)
				{
					orders.erase(it);
					break;
				}
			}
		}
		PrintOrder(orders);
	}
	return 0;
}