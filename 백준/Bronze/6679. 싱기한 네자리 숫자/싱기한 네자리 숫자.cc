#include <iostream>
#include <charconv>
#include <string>
using namespace std;

int ConvertToBase(int _num, int _base) {
	char buffer[65];
	int sum = 0;
	auto [ptr, ec] = to_chars(buffer, buffer + sizeof(buffer), _num, _base);
	if (ec == std::errc()) {
		string result(buffer, ptr);

		for (char c : result) {
			if (c >= 'A' && c <= 'F') {
				sum += c - 'A' + 10;
			}
			else if (c >= 'a' && c <= 'f') {
				sum += c - 'a' + 10;
			}
			else
				sum += c - '0';
		} 
	}
	return sum;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	for (int i = 1000; i < 10000; i++)
	{
		int num10 = ConvertToBase(i, 10);
		int num12 = ConvertToBase(i, 12);
		int num16 = ConvertToBase(i, 16);
		
		if (num10 == num12 && num10 == num16) {
			cout << i << "\n";
		}
	}
	return 0;
}