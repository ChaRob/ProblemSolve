#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int result, a, b;
	for (int i = 1; i <= 9; i++)
	{
		cout << "? A " << i << endl;
		cin >> result;
		if (result == 1)
		{
			a = i;
			break;
		}
	}
	for (int i = 1; i <= 9; i++)
	{
		cout << "? B " << i << endl;
		cin >> result;
		if (result == 1)
		{
			b = i;
			break;
		}
	}
	cout << "! " << a + b;
	return 0;
}