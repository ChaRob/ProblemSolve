#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 1; t <= T; t++)
	{
		int cnt[8] = { 0 };
		string input;
		cin >> input;
		for (int i = 0; i < 38; i++)
		{
			string slice = input.substr(i, 3);
			if (slice == "TTT")		 cnt[0]++;
			else if (slice == "TTH") cnt[1]++;
			else if (slice == "THT") cnt[2]++;
			else if (slice == "THH") cnt[3]++;
			else if (slice == "HTT") cnt[4]++;
			else if (slice == "HTH") cnt[5]++;
			else if (slice == "HHT") cnt[6]++;
			else if (slice == "HHH") cnt[7]++;
		}
		for (int i = 0; i < 8; i++)
		{
			cout << cnt[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}