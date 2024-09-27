#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<string> source, lengthed;

bool CheckImage(int& _n, int& _m) {
	for (int i = 0; i < _n; i++)
	{
		for (int j = 0; j < _m; j++)
		{
			for (int k = 0; k < 2; k++)
			{
				if (source[i][j] != lengthed[i][j * 2 + k]) return false;
			}
		}
	}
	return true;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	string tmp;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		source.push_back(tmp);
	}
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		lengthed.push_back(tmp);
	}
	if (CheckImage(n, m)) cout << "Eyfa";
	else cout << "Not Eyfa";
	return 0;
}