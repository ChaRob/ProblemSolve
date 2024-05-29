#include<iostream>
#include<cstring>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	string k;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		if (((int)k.back() & 1) == 1) {
			cout << "odd\n";
		}
		else {
			cout << "even\n";
		}
	}
	return 0;
}