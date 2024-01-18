#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int num[101] = { 0 };
	int avr = 0;
	int most = 0, cnt = 0;
	for (int i = 0; i < 10; i++)
	{
		int tmp;
		cin >> tmp;
		num[tmp / 10]++;
		avr += tmp;
	}
	cout << avr / 10 << "\n";
	for (int i = 1; i <= 100; i++)
	{
		if (num[i] > cnt) {
			cnt = num[i];
			most = i * 10;
		}
	}
	cout << most;
	return 0;
}