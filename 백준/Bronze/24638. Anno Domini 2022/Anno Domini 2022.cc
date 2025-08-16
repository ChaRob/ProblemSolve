#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int result = 0, a_v, b_v;
	string a, b;
	bool first = false, second = false;
	cin >> a >> b;
	if (a == "AD")
	{
		a_v = stoi(b);
		first = true;
	}
	else a_v = stoi(a);
	cin >> a >> b;
	if (a == "AD")
	{
		b_v = stoi(b);
		second = true;
	}
	else b_v = stoi(a);
	if (first != second)
	{
		result = a_v + b_v - 1;
	}
	else
	{
		result = abs(a_v - b_v);
	}
	cout << result;
	return 0;
}