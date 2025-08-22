#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	tm timeInfo = {};
	timeInfo.tm_year = 2009 - 1900; // Year since 1900
	cin >> timeInfo.tm_mday;
	cin >> timeInfo.tm_mon;
	timeInfo.tm_mon--;
	mktime(&timeInfo);
	switch (timeInfo.tm_wday)
	{
	case 0: // Sunday
		cout << "Sunday";
		break;
	case 1: // Monday
		cout << "Monday";
		break;
	case 2: // Tuesday
		cout << "Tuesday";
		break;
	case 3: // Wednesday
		cout << "Wednesday";
		break;
	case 4: // Thursday
		cout << "Thursday";
		break;
	case 5: // Friday
		cout << "Friday";
		break;
	case 6: // Saturday
		cout << "Saturday";
		break;
	default:
		break;
	}
	return 0;
}