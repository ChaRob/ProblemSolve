#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool IsVowel(char c)
{
	return c == 'a' || c == 'i' || c == 'o' ||
		c == 'u' || c == 'e';
}

string ExtractVowelString(const string& input)
{
	string result;
	copy_if(input.begin(), input.end(), back_inserter(result), IsVowel);
	return result;
}

bool IsPalindrome(const std::string& s)
{
	return std::equal(
		s.begin(),
		s.begin() + s.size() / 2,
		s.rbegin()
	);
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	string input, vowels;
	cin >> input;
	vowels = ExtractVowelString(input);
	if (IsPalindrome(vowels))
		cout << "S";
	else
		cout << "N";
	return 0;
}