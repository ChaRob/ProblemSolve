#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int wood[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> wood[i];
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4-i; j++)
		{
			if (wood[j] > wood[j + 1]) {
				int tmp = wood[j];
				wood[j] = wood[j + 1];
				wood[j + 1] = tmp;
				for (int k = 0; k < 5; k++)
				{
					cout << wood[k] << " ";
				}
				cout << "\n";
			}
		}
	}
	return 0;
}