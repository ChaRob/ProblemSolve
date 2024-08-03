#include<iostream>
using namespace std;

int main() {
	int n, stu, cnt = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> stu;
		if (stu != i) cnt++;
	}
	cout << cnt;
	return 0;
}