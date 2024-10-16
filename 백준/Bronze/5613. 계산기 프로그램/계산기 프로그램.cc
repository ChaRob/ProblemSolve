#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int num1, num2;
	char sig;
	cin >> num1;
	while (true)
	{
		cin >> sig;
		if (sig == '=') break;
		cin >> num2;
		switch (sig)
		{
		case '+':
			num1 += num2;
			break;
		case '-':
			num1 -= num2;
			break;
		case '*':
			num1 *= num2;
			break;
		case '/':
			num1 /= num2;
			break;
		}
	}
	cout << num1;
	return 0;
}