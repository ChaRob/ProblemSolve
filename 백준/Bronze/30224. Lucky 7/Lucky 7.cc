#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	long long n = 0;
	char c;
	bool contains_seven = false, divide_seven = false;
	while (cin >> c)
	{
		if (c == '7') contains_seven = true;
		n = n * 10 + (c - '0');
	}
	if (n % 7 == 0) divide_seven = true;
	if (contains_seven && divide_seven) cout << "3";
	else if (contains_seven) cout << "2";
	else if (divide_seven) cout << "1";
	else cout << "0";
	return 0;
}