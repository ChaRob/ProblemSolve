#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	string input, verb;
	getline(cin, input);
	for (int i = 0; i < n; i++)
	{
		getline(cin, input);
		stringstream ss(input);
		bool first = true;
		while (ss >> verb)
		{
			if (first) { 
				cout << "god";
				first = false;
			}
			else cout << verb;
		}
		cout << "\n";
	}
	return 0;
}