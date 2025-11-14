#include <iostream>
#include <vector>
using namespace std;

void MakeOdd(vector<int>& candys, int& n)
{
	for (int i = 0; i < n; i++)
	{
		if (candys[i] % 2 != 0) candys[i]++;
	}
}

bool IsEqualAll(const vector<int>& candys, int& n)
{
	bool check = true;
	int first = candys[0];
	for (int i = 1; i < n; i++)
	{
		if (first != candys[i])
		{
			check = false;
			break;
		}
	}
	return check;
}

void MoveHalfCandyToRight(vector<int>& candys, int& n)
{
	vector<int> half(n);
	for (int i = 0; i < n; i++)
	{
		half[i] = candys[i] / 2;
		candys[i] /= 2;
	}
	for (int i = 0; i < n; i++)
	{
		candys[(i + 1) % n] += half[i];
	}
}

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	vector<int> candys(10);
	for (int t = 0; t < T; t++)
	{
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> candys[i];
		}
		int cycle = 0;
		while (true)
		{
			MakeOdd(candys, n);
			if (!IsEqualAll(candys, n)) MoveHalfCandyToRight(candys, n);
			else break;
			cycle++;
		}
		cout << cycle << "\n";
	}
	return 0;
}