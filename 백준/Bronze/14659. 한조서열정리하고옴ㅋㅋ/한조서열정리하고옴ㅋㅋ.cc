#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, attacked = 0, max_attack = 0, highest = 0;
	cin >> n;
	int mountain = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> mountain;
		highest = (highest > mountain) ? highest : mountain;

		if (highest > mountain) {
			attacked++;
			max_attack = (max_attack > attacked) ? max_attack : attacked;
		}
		else {
			attacked = 0;
		}
	}
	cout << max_attack;
	return 0;
}