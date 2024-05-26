#include<iostream>
#include<cstring>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string A, B;
	cin >> A >> B;
	long long sum = 0;
	for (int i = 0; i < A.length(); i++)
	{
		int a = A[i] - '0';
		for (int j = 0; j < B.length(); j++)
		{
			int b = B[j] - '0';
			sum += a * b;
		}
	}
	cout << sum;
	return 0;
}