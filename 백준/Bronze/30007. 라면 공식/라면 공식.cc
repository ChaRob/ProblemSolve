#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int A, B, X;
		cin >> A >> B >> X;
		cout << A * (X - 1) + B << "\n";
	}
	return 0;
}