#include<iostream>
using namespace std;

int main() {
	int n, i;
	cin >> n;
	for (i = 1; (i + 1) * (i + 1) <= n; i++);
	cout << "The largest square has side length " << i << ".";
	return 0;
}