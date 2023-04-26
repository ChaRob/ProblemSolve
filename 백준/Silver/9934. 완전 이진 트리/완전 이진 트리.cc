#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

vector<vector<int>> level;

void inorder(int node, int max_node, int depth) {
	int tmp;
	if (node * 2 <= max_node) {
		inorder(node * 2, max_node, depth + 1);
	}
	cin >> tmp;
	level[depth].push_back(tmp);
	if (node * 2 + 1 <= max_node) {
		inorder(node * 2 + 1, max_node, depth + 1);
	}
}

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int k;
	cin >> k;
	for (size_t i = 0; i <= k; i++)
	{
		vector<int> vec;
		level.push_back(vec);
	}

	inorder(1, pow(2,k) - 1, 1);

	for (size_t i = 1; i <= k; i++)
	{
		for (size_t j = 0; j < level[i].size(); j++)
		{
			cout << level[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}