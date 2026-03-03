#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	vector<int> numbers;
	char c;
	while (cin >> c)
	{
		if (c == '+')
		{
			int a = numbers.back();
			numbers.pop_back();
			int b = numbers.back();
			numbers.pop_back();
			numbers.push_back(a + b);
		}
		else if (c == '-')
		{
			int a = numbers.back();
			numbers.pop_back();
			int b = numbers.back();
			numbers.pop_back();
			numbers.push_back(b - a);
		}
		else if (c == '*')
		{
			int a = numbers.back();
			numbers.pop_back();
			int b = numbers.back();
			numbers.pop_back();
			numbers.push_back(a * b);
		}
		else if (c == '/')
		{
			int a = numbers.back();
			numbers.pop_back();
			int b = numbers.back();
			numbers.pop_back();
			numbers.push_back(b / a);
		}
		else
		{
			numbers.push_back((c - '0'));
		}
	}
	cout << numbers.back();
	return 0;
}