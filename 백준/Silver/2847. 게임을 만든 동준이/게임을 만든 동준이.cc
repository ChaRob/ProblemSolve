#include<iostream>
using namespace std;

int score[100];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, decre = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> score[i];
	}
	for (int i = n - 2; i >= 0; i--)
	{
		if (score[i] >= score[i + 1]) {
			decre += score[i] - score[i + 1] + 1;
			score[i] = score[i + 1] - 1;
		}
	}
	cout << decre;
	return 0;
}