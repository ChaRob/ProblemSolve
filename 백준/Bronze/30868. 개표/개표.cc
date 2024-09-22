#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T, n;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		cin >> n;
		while (n >= 5)
		{
			cout << "++++ ";
			n -= 5;
		}
		while (n > 0)
		{
			cout << "|";
			n--;
		}
		cout << "\n";
	}
	return 0;
}