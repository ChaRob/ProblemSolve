#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

struct Data {
	string s;
	string us;
	bool fIsUpper = false;
};

bool Compare(const Data& a, const Data& b) {
	return a.us < b.us;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	while (cin >> n)
	{
		if (n == 0) break;
		vector<Data> vec;
		for (int i = 0; i < n; i++)
		{
			Data newData;
			cin >> newData.s;
			for (auto& c : newData.s)
			{
				newData.us += toupper(c);
			}
			vec.push_back(newData);
		}
		sort(vec.begin(), vec.end(), Compare);
		cout << vec[0].s << "\n";
	}
	return 0;
}