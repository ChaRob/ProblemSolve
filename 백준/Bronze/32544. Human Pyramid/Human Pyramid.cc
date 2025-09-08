#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	long long n;
	cin >> n;
	long long needPeople = 0, i = 1;
	while (true)
	{
		needPeople += i;
		if (needPeople > n)
		{
			cout << i - 1;
			break;
		}
		i++;
	}
	return 0;
}