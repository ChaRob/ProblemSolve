#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	char output;
	for (int i = 0; i < n; i++)
	{
		int a, b, tmp;
		int an[5] = {}, bn[5] = {};
		cin >> a;
		for (int j = 0; j < a; j++)
		{
			cin >> tmp;
			an[tmp]++;
		}
		cin >> b;
		for (int j = 0; j < b; j++)
		{
			cin >> tmp;
			bn[tmp]++;
		}
		output = 'D';

		for (int j = 4; j >= 1; j--)
		{
			if (an[j] > bn[j]) {
				output = 'A';
				break;
			}
			else if (an[j] < bn[j]) {
				output = 'B';
				break;
			}
		}
		cout << output << "\n";
	}
	return 0;
}