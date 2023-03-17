#include<iostream>
using namespace std;

long long at(unsigned long long a, unsigned long long b) {
	return (a + b) * (a - b);
}

int main() {
	unsigned long long A, B;
	cin >> A >> B;
	cout << at(A, B);
	return 0;
}