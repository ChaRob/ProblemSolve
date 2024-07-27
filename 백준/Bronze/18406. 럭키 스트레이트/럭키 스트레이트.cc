#include<iostream>
#include<string>
using namespace std;

int main() {
	string n;
	cin >> n;
	int l = 0, r = 0;
	for (int i = 0; i < n.size()/2; i++)
	{
		l += n[i] - '0';
		r += n[n.size() - (i + 1)] - '0';
	}
	if (l == r) cout << "LUCKY";
	else		cout << "READY";
	return 0;
}