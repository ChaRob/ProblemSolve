#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T, N, F;
	cin >> T >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> F;
		T -= F;
	}
	if (T <= 0) {
		cout << "Padaeng_i Happy";
	}
	else {
		cout << "Padaeng_i Cry";
	}
	return 0;
}