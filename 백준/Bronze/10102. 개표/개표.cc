#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int v;
	cin >> v;
	string vote;
	cin >> vote;
	int a = 0, b = 0;
	for (int i = 0; i < v; i++)
	{
		if (vote[i] == 'A') {
			a++;
		}
		else {
			b++;
		}
	}
	if (a > b) {
		cout << 'A';
	}
	else if (a < b) {
		cout << 'B';
	}
	else {
		cout << "Tie";
	}
	return 0;
}