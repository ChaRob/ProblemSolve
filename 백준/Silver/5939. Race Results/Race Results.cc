#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<int> elapesTimes(n);
	for (int i = 0; i < n; i++)
	{
		int hour, minute, second;
		cin >> hour >> minute >> second;
		int totalSeconds = hour * 3600 + minute * 60 + second;
		elapesTimes[i] = totalSeconds;
	}
	sort(elapesTimes.begin(), elapesTimes.end());
	for (int i = 0; i < n; i++)
	{
		int hour, minute, second;
		hour = elapesTimes[i] / 3600;
		minute = (elapesTimes[i] % 3600) / 60;
		second = elapesTimes[i] % 60;
		cout << hour << " " << minute << " " << second << "\n";
	}
	return 0;
}