#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b, c;
	cin >> a >> b >> c;
	cout << a + b - c << "\n" << stoi(to_string(a) + to_string(b)) - c;
	return 0;
}