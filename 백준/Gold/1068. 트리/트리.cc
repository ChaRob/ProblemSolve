#include <iostream>
#include <vector>
#include <set>
using namespace std;

struct Node
{
	int parent;
	set<int> children;
};

void DeleteNode(vector<Node>& tree, int node)
{
	for (int child : tree[node].children)
	{
		if (child != -1) DeleteNode(tree, child);
	}
	tree[node].children.clear();
	tree[node].children.insert(-1); // deleted
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<Node> tree(n);
	for (int i = 0; i < n; i++)
	{
		int parent;
		cin >> parent;
		if (parent != -1)
		{
			tree[parent].children.insert(i);
			tree[i].parent = parent;
		}
	}
	int deleteNode;
	cin >> deleteNode;
	DeleteNode(tree, deleteNode);
	if (tree[deleteNode].parent != -1) tree[tree[deleteNode].parent].children.erase(deleteNode);
	int leafCount = 0;
	for (int i = 0; i < n; i++)
	{
		if (tree[i].children.size() == 1 && *tree[i].children.begin() == -1) continue;
		if (tree[i].children.empty()) leafCount++;
	}
	cout << leafCount;
	return 0;
}