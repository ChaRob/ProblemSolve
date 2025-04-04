#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string input;
	cin >> input;
	for (size_t i = 0; i < input.size(); i++)
	{
		if (i == input.size() / 2) cout << " ";
		cout << input[i];
	}
	return 0;
}