#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int length;
	cin >> length;
	string s;
	cin >> s;
	vector<int> p_positions, c_positions;
	for (int i = 0; i < length; i++)
	{
		if (s[i] == 'P')
		{
			p_positions.push_back(i);
		}
		if (s[i] == 'C')
		{
			c_positions.push_back(i);
		}
	}
	for (int i = 0; i < p_positions.size() && i < c_positions.size(); i++)
	{
		s[p_positions[i]] = 'C';
		s[c_positions[i]] = 'P';
	}
	cout << s;
	return 0;
}