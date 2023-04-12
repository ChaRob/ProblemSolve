#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<int> pos;

int kmp(string input_string, string pattern) {
	int pattern_length = pattern.size();
	int *Pi_table = new int[pattern_length];
	for (size_t i = 0; i < pattern_length; i++)
	{
		Pi_table[i] = 0;
	}
	int i = 0, j, cnt = 0;
	for (j = 1; j < pattern_length; j++)
	{
		while (i > 0 && pattern[i] != pattern[j]) {
			i = Pi_table[i - 1];
		}
		if (pattern[i] == pattern[j]) {
			i++;
			Pi_table[j] = i;
		}
	}
	i = 0;
	j = 0;
	while (i < input_string.size())
	{
		if (input_string[i] == pattern[j]) {
			j++;
			i++;
			if (j == pattern_length) {
				cnt++;
				pos.push_back(i - j + 1);
				if (j != 0) j = Pi_table[j - 1];
			}
		}
		else {
			if (j != 0) j = Pi_table[j - 1];
			else i++;
		}
	}
	return cnt;
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	string input_string, pattern;
	getline(cin, input_string);
	getline(cin, pattern);
	cout << kmp(input_string, pattern) << "\n";
	for (size_t i = 0; i < pos.size(); i++)
	{
		cout << pos[i] << " ";
	}
	return 0;
}