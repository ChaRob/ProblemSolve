#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int student, apple;
		cin >> student >> apple;
		sum += apple % student;
	}
	cout << sum;
	return 0;
}