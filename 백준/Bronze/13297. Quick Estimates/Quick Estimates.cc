#include<iostream>
#include<string>
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
		int count = 0;
		for (char c : input)
		{
			count++;
		}
		cout << count << "\n";
	}
	return 0;
}