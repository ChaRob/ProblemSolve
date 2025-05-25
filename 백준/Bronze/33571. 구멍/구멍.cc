#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	char c;
	int holes = 0;
	while (cin >> c)
	{
		if (c == '@') holes++;
		else if (c == 'B') holes += 2;
		else if (c == 'A' || c == 'D' || c == 'O' || c == 'P' || c == 'Q' || c == 'R') holes++;
		else if (c == 'a' || c == 'b' || c == 'd' || c == 'e' || c == 'g' || c == 'o' || c == 'p' || c == 'q') holes++;
	}
	cout << holes << "\n";
	return 0;
}