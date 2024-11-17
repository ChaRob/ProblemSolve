#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	bool cup[3] = {true, false, false};
	char input;
	while (cin >> input)
	{
		bool tmp;
		switch (input)
		{
		case 'A':
			tmp = cup[0];
			cup[0] = cup[1];
			cup[1] = tmp;
			break;
		case 'B':
			tmp = cup[1];
			cup[1] = cup[2];
			cup[2] = tmp;
			break;
		case 'C':
			tmp = cup[0];
			cup[0] = cup[2];
			cup[2] = tmp;
			break;
		default:
			break;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if (cup[i]) cout << i + 1;
	}
	return 0;
}