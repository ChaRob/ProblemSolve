#include<iostream>
#include<string>
using namespace std;
int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int time[6] = { 0 }, ptr = 0;
	string c;
	for (size_t i = 0; i < 10; i++)
	{
		cin >> c;
		if (c!=":") {
			time[ptr++] = stoi(c);
		}
	}
	if (
		(time[0] > time[3]) || 
		(time[0] == time[3] && time[1] > time[4]) ||
		(time[0] == time[3] && time[1]==time[4] && time[2] > time[5])
		) {
		time[3] += 24;
	}

	cout << (((time[3] - time[0]) * 60) + time[4] - time[1]) * 60 + time[5] - time[2];
	return 0;
}