#include <iostream>
#include <string>
#include <sstream>
using namespace std;

using ll = long long;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	cin.ignore();
	for (int t = 0; t < T; t++)
	{
		string line, word;
		getline(cin, line);
		stringstream ss(line);
		ss >> word;
		ll first = stoll(word);
		char cal, equal;
		ss >> cal;
		ss >> word;
		ll second = stoll(word);
		ss >> equal >> word;
		ll answer = stoll(word), result = 0;
		switch (cal)
		{
		case '+':
			result = first + second;
			break;
		case '-':
			result = first - second;
			break;
		case '*':
			result = first * second;
			break;
		case '/':
			result = first / second;
			break;
		}
		if (answer == result)
			cout << "correct\n";
		else
			cout << "wrong answer\n";
	}
	return 0;
}