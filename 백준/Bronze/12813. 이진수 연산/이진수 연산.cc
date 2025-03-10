#include <iostream>
#include <bitset>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	const int bSize = 100000;
	string a, b;
	cin >> a >> b;
	bitset<bSize> bitA = bitset<bSize>(a), bitB = bitset<bSize>(b);
	cout << (bitA & bitB).to_string() << "\n";
	cout << (bitA | bitB).to_string() << "\n";
	cout << (bitA ^ bitB).to_string() << "\n";
	cout << (~bitA).to_string() << "\n";
	cout << (~bitB).to_string() << "\n";
	return 0;
}