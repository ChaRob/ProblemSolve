#include <iostream>
#include <string>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	string input1, input2;
	int cnt;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		cnt = 0;
		cin >> input1 >> input2;
		for (int i = 0; i < input1.size(); i++)
		{
			if (input1[i] != input2[i]) cnt++;
		}
		cout << "Hamming distance is " << cnt << ".\n";
	}
	return 0;
}