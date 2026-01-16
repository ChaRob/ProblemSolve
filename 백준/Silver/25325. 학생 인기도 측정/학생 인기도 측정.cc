#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

bool Compare(const pair<string,int>& _a, const pair<string,int>& _b)
{
	if (_a.second == _b.second)
		return _a.first < _b.first;
	return _a.second > _b.second;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<pair<string, int>> student;
	for (int i = 0; i < n; i++)
	{
		string a;
		cin >> a;
		student.push_back(make_pair(a, 0));
	}
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		string line, token;
		getline(cin, line);
		stringstream ss(line);
		while (ss >> token)
		{
			for (int i = 0; i < n; i++)
			{
				if (student[i].first == token)
				{
					student[i].second++;
					break;
				}
			}
		}
	}
	sort(student.begin(), student.end(), Compare);
	for (pair<string,int> var : student)
	{
		cout << var.first << " " << var.second << "\n";
	}
	return 0;
}