#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int sleepTime, clockTime;
	cin >> sleepTime >> clockTime;
	if (sleepTime >= 20)
		cout << clockTime - sleepTime + 24;
	else
		cout << clockTime - sleepTime;
	return 0;
}