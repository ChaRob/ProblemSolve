#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	string mainTime;
	cin >> mainTime;
	int mainHour = stoi(mainTime.substr(0, 2));
	int mainMin = stoi(mainTime.substr(3, 2));
	string utc;
	cin >> utc;
	double utcDiff = stod(utc.substr(3));
	mainHour -= (int)utcDiff;
	mainMin -= (utcDiff - (int)utcDiff) * 60;
	if (mainMin < 0)
	{
		mainMin += 60;
		mainHour--;
	}
	if (mainHour < 0)
		mainHour += 24;
	for (int i = 0; i < n; i++)
	{
		cin >> utc;
		utcDiff = stod(utc.substr(3));
		int hour = mainHour + (int)utcDiff;
		int min = mainMin + (utcDiff - (int)utcDiff) * 60;
		if (min >= 60)
		{
			min -= 60;
			hour++;
		}
		else if (min < 0)
		{
			min += 60;
			hour--;
		}

		if (hour >= 24)
			hour -= 24;
		else if (hour < 0)
			hour += 24;
		
		cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << min << "\n";
	}
	return 0;
}