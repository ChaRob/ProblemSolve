#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string input;
	while (cin >> input)
	{
		if (input == "CU") cout << "see you\n";
		else if (input == ":-)") cout << "I’m happy\n";
		else if (input == ":-(") cout << "I’m unhappy\n";
		else if (input == ";-)") cout << "wink\n";
		else if (input == ":-P") cout << "stick out my tongue\n";
		else if (input == "(~.~)") cout << "sleepy\n";
		else if (input == "TA") cout << "totally awesome\n";
		else if (input == "CCC") cout << "Canadian Computing Competition\n";
		else if (input == "CUZ") cout << "because\n";
		else if (input == "TY") cout << "thank-you\n";
		else if (input == "YW") cout << "you’re welcome\n";
		else if (input == "TTYL") cout << "talk to you later\n";
		else cout << input << "\n";
	}
	return 0;
}