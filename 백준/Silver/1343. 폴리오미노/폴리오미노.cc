#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string input;
	cin >> input;
	input.push_back('.');
	string output;
	int cnt = 0;
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] == 'X') {
			cnt++;
		}
		else if (input[i] == '.') {
			while (cnt > 0) {
				if (cnt >= 4) {
					output += "AAAA";
					cnt -= 4;
				}
				else if (cnt >= 2) {
					output += "BB";
					cnt -= 2;
				}
				else {
					output = "-1";
					break;
				}
			}
			if (output == "-1") {
				break;
			}
			output.push_back('.');
		}
	}
	if (output != "-1") {
		output.pop_back();
	}
	cout << output;
	return 0;
}