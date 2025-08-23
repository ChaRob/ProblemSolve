#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	int length = 0;
	string output = "";
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		if (length + s.length() <= k)
		{
			output += (s + " ");
			length += s.length();
		}
		else
		{
			output.pop_back();
			cout << output << "\n";
			output = s + " ";
			length = s.length();
		}
	}
	output.pop_back();
	cout << output;
	return 0;
}