#include<iostream>
#include<string>
#include<bitset>
#include<math.h>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a;
	cin >> a;
	string input = bitset<32>(a).to_string();
	size_t pos = input.find('1');
	input = pos != std::string::npos ? input.substr(pos) : "0";
	int res = 0;
	for (size_t i = 0; i < input.size(); i++)
	{
		res += (input[i] - '0') * pow(2, i);
	}
	cout << res;
	return 0;
}