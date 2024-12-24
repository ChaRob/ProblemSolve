#include <iostream>
#include <string>
using namespace std;

int main()
{
	string sentence = "WelcomeToSMUPC";
	int n, target;
	cin >> n;
	if (n % 14 == 0) target = 13;
	else target = n % 14 - 1;
	cout << sentence[target];
}