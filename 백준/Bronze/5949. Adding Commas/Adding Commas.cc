#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	string input;
	cin >> input;
	int size = input.size();
	while (size > 0)
	{
		if (size != input.size() && size % 3 == 0)
		{
			cout << ',';
		}
		cout << input[input.size() - size];
		size--;
	}
	return 0;
}