#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Node
{
public:
	Node(char ch) :c(ch) {}
	~Node() {
		for (auto child : children) delete child;
	}
	char c;
	bool isEnd = false;
	vector<Node*> children;

	int HasChild(char ch)
	{
		for (int i = 0; i < children.size(); i++)
		{
			if (children[i]->c == ch) return i;
		}
		return -1;
	}

	void InsertChild(const string& s, int index)
	{
		if (s.length() == index)
		{
			isEnd = true;
			return;
		}

		Node* child = new Node(s[index]);
		children.push_back(child);
		child->InsertChild(s, index + 1);
	}

	void AppendData(const string& s, int index)
	{
		if (s.length() == index)
		{
			isEnd = true;
			return;
		}

		int idx = HasChild(s[index]);
		if (idx != -1)
			children[idx]->AppendData(s, index + 1);
		else
			InsertChild(s, index);
	}

	void SearchData(const string& s, int index, vector<int>& foundWords)
	{
		if (isEnd) foundWords.push_back(index);
		if (s.length() == index) return;

		int idx = HasChild(s[index]);
		if (idx != -1)
			children[idx]->SearchData(s, index + 1, foundWords);
		else
			return;
	}
};

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n, m, q;
	cin >> n >> m;
	Node* colors = new Node('0');
	Node* nickNames = new Node('0');
	for (int i = 0; i < n; i++)
	{
		string color;
		cin >> color;
		colors->AppendData(color, 0);
	}
	for (int i = 0; i < m; i++)
	{
		string nickName;
		cin >> nickName;
		reverse(nickName.begin(), nickName.end());
		nickNames->AppendData(nickName, 0);
	}
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		string teamName;
		cin >> teamName;
		string rev_teamName;
		rev_teamName.resize(teamName.size());
		reverse_copy(teamName.begin(), teamName.end(), rev_teamName.begin());
		vector<int> foundColors;
		colors->SearchData(teamName, 0, foundColors);
		vector<int> foundNickNames;
		nickNames->SearchData(rev_teamName, 0, foundNickNames);

		string ans = "No\n";
		for (int x = 0; x < foundColors.size(); x++)
		{
			for (int y = 0; y < foundNickNames.size(); y++)
			{
				if (foundColors[x] + foundNickNames[y] == teamName.size())
				{
					ans = "Yes\n";
					break;
				}
			}
		}
		cout << ans;
	}
	delete colors;
	delete nickNames;
	return 0;
}