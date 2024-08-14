#include<iostream>
#include<string>
using namespace std;

int main() {
	string number;
	cin >> number;
	int cnt = 1;
	char last = '\0';
	for (int i = 0; i < number.size(); i++)
	{
		switch (number[i])
		{
		case 'c':
			if (last == 'c') {
				cnt *= 25;
			}
			else {
				cnt *= 26;
			}
			last = 'c';
			break;
		case 'd':
			if (last == 'd') {
				cnt *= 9;
			}
			else {
				cnt *= 10;
			}
			last = 'd';
			break;
		default:
			break;
		}
	}

	cout << cnt;
	return 0;
}