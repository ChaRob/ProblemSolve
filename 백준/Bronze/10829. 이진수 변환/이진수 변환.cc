#include<iostream>
#include<bitset>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	long long n;
	cin >> n;
	string bit = bitset<64>(n).to_string();
	size_t pos = bit.find('1');
	cout << bit.substr(pos);
	return 0;
}