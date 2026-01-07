#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	string pattern, left, right;
	cin >> n >> pattern;
	int starPos = pattern.find('*');
	left = pattern.substr(0, starPos);
	right = pattern.substr(starPos + 1);
	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		int leftPos = input.find(left);
		int rightPos = input.rfind(right);
		if (leftPos == 0 && rightPos + right.size() == input.size() && rightPos >= leftPos + left.size())
			cout << "DA\n";
		else
			cout << "NE\n";
	}
	return 0;
}