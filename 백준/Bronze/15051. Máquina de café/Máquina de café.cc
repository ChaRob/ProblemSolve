#include<iostream>
using namespace std;

int min(int a, int b, int c) {
	int first = b * 2 + c * 4;
	int second = a * 2 + c * 2;
	int third = a * 4 + b * 2;
	int tmp = (first < second) ? first : second;
	return ((tmp < third) ? tmp : third);
}

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int a, b, c;
	cin >> a >> b >> c;
	cout << min(a, b, c);

	return 0;
}