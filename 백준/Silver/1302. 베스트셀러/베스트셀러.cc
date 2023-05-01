#include<iostream>
#include<string>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	return a.second > b.second;
}

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int n;
	map<string, int> books;
	string book;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> book;
		auto search = books.find(book);
		if (search != books.end()) {
			books[book]++;
		}
		else {
			books[book] = 1;
		}
	}
	vector<pair<string, int>> v(books.begin(), books.end());
	sort(v.begin(), v.end(), cmp);
	cout << v[0].first;

	return 0;
}