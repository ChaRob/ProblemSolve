#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int s1, s2, ans, rep;
	bool check = true;
	cin >> s1 >> s2;
	for (int i = 0; i < s1; i++)
	{
		cin >> ans >> rep;
		if (ans != rep) {
			check = false;
			break;
		}
	}
	if (check) {
		for (int i = 0; i < s2; i++)
		{
			cin >> ans >> rep;
			if (ans != rep) {
				check = false;
				break;
			}
		}
		if (check) cout << "Accepted";
		else cout << "Why Wrong!!!";
	}
	else cout << "Wrong Answer";
	return 0;
}