#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <ctime>
using namespace std;

time_t ToTimeT(int year, int month, int day, int hour = 0, int minute = 0, int second = 0) {
	struct tm timeinfo {};
	timeinfo.tm_year = year - 1900;
	timeinfo.tm_mon = month - 1;
	timeinfo.tm_mday = day;
	timeinfo.tm_hour = hour;
	timeinfo.tm_min = minute;
	timeinfo.tm_sec = second;
	timeinfo.tm_isdst = -1;
	return mktime(&timeinfo);
}

bool IsAfterDate(int _y1, int _m1, int _d1, int _y2, int _m2, int _d2) {
	time_t t1 = ToTimeT(_y1, _m1, _d1);
	time_t t2 = ToTimeT(_y2, _m2, _d2);
	return difftime(t1, t2) > 0;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string line;
	char delimiter = '-';
	cin >> line;
	vector<int> tokens;
	stringstream ss(line);
	while (getline(ss, line, delimiter)) {
		tokens.push_back(stoi(line));
	}
	if (IsAfterDate(tokens[0], tokens[1], tokens[2], 2023, 10, 21 - 35)) {
		cout << "TOO LATE";
	}
	else {
		cout << "GOOD";
	}
	return 0;
}