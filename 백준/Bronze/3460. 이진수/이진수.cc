#include<iostream>
#include<bitset>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	for (size_t test = 0; test < t; test++)
	{
		int n;
		cin >> n;
		string binary = bitset<32>(n).to_string();
		for (int i = 0; i < 32; i++)
		{
			if (binary[31 - i] == '1') {
				cout << i << " ";
			}
		}
	}

	return 0;
}