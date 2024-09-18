#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int r, c, zr, zc;
	cin >> r >> c >> zr >> zc;
	char input;
	string res[250];
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> input;
			for (int a = 0; a < zr; a++)
			{
				for (int b = 0; b < zc; b++)
				{
					res[i*zr + a] += input;
				}
			}
		}
	}
	for (int i = 0; i < r*zr; i++)
	{
		cout << res[i] << "\n";
	}
	return 0;
}