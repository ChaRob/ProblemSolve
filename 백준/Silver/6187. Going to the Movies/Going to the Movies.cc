#include <iostream>
#include <vector>
using namespace std;

void FindGroupCow(int nowWeight, int& _maxWeight, vector<int> _weights, int& _cw)
{
	int n = _weights.size();
	int tmpWeight = 0, tmpCow = 0;;
	for (int i = 0; i < n; i++)
	{
		int selectWeight = _weights[i];
		if (nowWeight + selectWeight <= _cw)
		{
			nowWeight += selectWeight;
			_weights.erase(_weights.begin() + i);
			if (nowWeight > _maxWeight)
			{
				_maxWeight = nowWeight;
			}

			FindGroupCow(nowWeight, _maxWeight, _weights, _cw);
			nowWeight -= selectWeight;
			_weights.insert(_weights.begin() + i, selectWeight);
		}
	}
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int c, n;
	cin >> c >> n;
	int maxWeight = 0;
	vector<int> weights(n);
	for (int i = 0; i < n; i++)
	{
		cin >> weights[i];
	}
	FindGroupCow(0, maxWeight, weights, c);
	cout << maxWeight;
	return 0;
}