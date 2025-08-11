#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	if (n % 2) cout << "Goose";
	else cout << "Duck";
	return 0;
}