#include <iostream>
#include <string>
using namespace std;

char trans(int a) {
	if (a >= 10) {
		return 'A' + a - 10;
	}
	return '0' + a;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, b;
	string result;
	cin >> n >> b;
	while (n > 0) {
		result = trans(n % b) + result;
		n = n / b;
	}
	cout << result;
	
	return 0;
}