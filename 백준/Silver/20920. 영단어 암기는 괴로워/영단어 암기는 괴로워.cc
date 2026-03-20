#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	map<string, int> words;
	for (int i = 0; i < n; i++)
	{
		string word;
		cin >> word;
		if (word.size() < m)
			continue;
		auto it = words.find(word);
		if (it != words.end())
			words[word]++;
		else
			words[word] = 1;
	}
	vector<pair<string, int>> vec(words.begin(), words.end());
	sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
		if (a.second != b.second)
			return a.second > b.second;
		if (a.first.size() != b.first.size())
			return a.first.size() > b.first.size();
		return a.first < b.first;
	});
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i].first << "\n";
	}
	return 0;
}