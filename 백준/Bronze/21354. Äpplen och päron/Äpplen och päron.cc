#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, p;
	cin >> a >> p;
	if (a * 7 < p * 13) cout << "Petra";
	else if (a * 7 > p * 13) cout << "Axel";
	else cout << "lika";
	return 0;
}