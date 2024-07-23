#include<iostream>
#include<string>
using namespace std;

int main() {
	string msg;
	cin >> msg;
	int len = msg.size(), i = 1;
	int R = 100, C = 0;
	for (int i = 10; i > 0; i--)
	{
		if (len % i == 0) {
			R = i;
			C = len / i;
			if (R <= C) break;
		}
	}
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			cout << msg[i + j * R];
		}
	}

	return 0;
}