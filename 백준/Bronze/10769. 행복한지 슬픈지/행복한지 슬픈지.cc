#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string line, result;
	getline(cin, line);
	int happy = 0, sad = 0;
	int pos = line.find(":-)", 0);
	while (pos != string::npos)
	{
		happy++;
		pos = line.find(":-)", pos + 3);
	}
	pos = line.find(":-(", 0);
	while (pos != string::npos)
	{
		sad++;
		pos = line.find(":-(", pos + 3);
	}

	if (happy == sad) {
		result = "unsure";
		if (happy == 0 && sad == 0) {
			result = "none";
		}
	}
	else if (happy > sad) {
		result = "happy";
	}
	else if (happy < sad) {
		result = "sad";
	}
	cout << result;
	return 0;
}