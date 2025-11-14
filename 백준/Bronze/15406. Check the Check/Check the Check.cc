#include <iostream>
#include <string>
using namespace std;

using ll = long long;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string menu;
	ll totalPrice, priceSum = 0, price, order;
	while (true)
	{
		getline(cin, menu);
		if (menu == "TOTAL") break;
		cin >> price >> order;
		priceSum += price * order;
		cin.ignore();
	}
	cin >> totalPrice;
	if (totalPrice <= priceSum) cout << "PAY";
	else cout << "PROTEST";
	return 0;
}