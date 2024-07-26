#include <iostream>
#include <string>
using namespace std;

int main()
{
	string words[3], ans;
	int x, target = -1;
	for (int i = 0; i < 3; i++)
	{
		cin >> words[i];
		if (target == -1 && words[i][0] <= 57) {
			target = i;
			x = stoi(words[i]);
		}
	}
	if (target == 0) x += 3;
	else if (target == 1) x += 2;
	else if (target == 2) x += 1;

	if (x % 3 == 0 && x % 5 == 0) {
		ans = "FizzBuzz";
	}
	else if (x % 3 == 0) {
		ans = "Fizz";
	}
	else if (x % 5 == 0) {
		ans = "Buzz";
	}
	else ans = to_string(x);

	cout << ans;
	return 0;
}