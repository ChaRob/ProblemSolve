#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		vector<char> vec;
		for (int j = 0; j < input.size(); j++)
		{
			if (vec.empty()) {
				vec.push_back(input[j]);
			}
			else if (vec.back() != input[j]) {
				vec.push_back(input[j]);
			}
		}
		for (int j = 0; j < vec.size(); j++)
		{
			cout << vec[j];
		}
		cout << "\n";
	}
	return 0;
}