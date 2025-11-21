#include <iostream>
#include <set>
#include <vector>
using namespace std;

void PrintVector(const vector<int>& seq, const int& m, int* line, const int& start, int index)
{
	if (m == index)
	{
		for (int i = 0; i < m; i++)
		{
			cout << line[i] << ' ';
		}
		cout << '\n';
		return;
	}

	for (int i = start; i < seq.size(); i++)
	{
		line[index] = seq[i];
		PrintVector(seq, m, line, i, index + 1);
	}
}

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	set<int> nums;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		nums.insert(num);
	}
	vector<int> seq(nums.begin(), nums.end());
	int* line = new int[m];
	PrintVector(seq, m, line, 0, 0);
	delete[] line;
	return 0;
}