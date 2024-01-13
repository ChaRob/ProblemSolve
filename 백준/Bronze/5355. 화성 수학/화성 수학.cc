#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	cin.ignore();
	for (int t = 0; t < T; t++)
	{
		string input;
		getline(cin, input);
		string s_num;
		int i = 0;
		while (input[i] != ' ') {
			s_num += input[i++];
		}
		float num = stof(s_num);
		for (; i < input.size(); i++)
		{
			if (input[i] == '@') {
				num *= 3;
			}
			else if (input[i] == '%') {
				num += 5;
			}
			else if (input[i] == '#') {
				num -= 7;
			}
		}
		cout << fixed << setprecision(2) << num << "\n";
	}
	return 0;
}