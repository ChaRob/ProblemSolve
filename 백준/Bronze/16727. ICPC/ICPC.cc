#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int p1, p2, s1, s2;
	string res;
	cin >> p1 >> s1 >> s2 >> p2;
	if (p1 + p2 > s1 + s2) {
		res = "Persepolis";
	}
	else if (p1 + p2 < s1 + s2) {
		res = "Esteghlal";
	}
	else {
		if (p2 > s1) {
			res = "Persepolis";
		}
		else if (p2 < s1) {
			res = "Esteghlal";
		}
		else {
			res = "Penalty";
		}
	}
	cout << res;
	return 0;
}