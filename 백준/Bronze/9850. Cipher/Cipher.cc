#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string line;
	getline(cin, line);
	string newLine = line;
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < newLine.size(); j++)
		{
			if (newLine[j] >= 'A' && newLine[j] <= 'Z')
				newLine[j]++;
			if (newLine[j] > 'Z')
				newLine[j] -= 26;
		}
		if (newLine.find("CHIPMUNKS") != string::npos && newLine.find("LIVE") != string::npos)
		{
			line = newLine;
			break;
		}
	}
	cout << line;
	return 0;
}