#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, k, i = 0;
	cin >> n >> k;
	vector<int> row;
	string input, tmp;
	cin >> input;
	stringstream ss(input);
	while (getline(ss, tmp, ','))
	{
		row.push_back(stoi(tmp));
	}
	for (i = 0; i < k; i++)
	{
		vector<int> newRow;
		for (int j = 1; j < n - i; j++)
		{
			newRow.push_back(row[j] - row[j - 1]);
		}
		row = newRow;
	}
	for (i = 0; i < n-k-1; i++)
	{
		cout << row[i] << ",";
	}
	cout << row[i];
	return 0;
}