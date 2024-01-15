#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	char a;
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			cin >> a;
			if (a == 'w') {
				cout << "chunbae";
				return 0;
			}
			else if (a == 'b') {
				cout << "nabi";
				return 0;
			}
			else if (a == 'g') {
				cout << "yeongcheol";
				return 0;
			}
		}
	}
	return 0;
}