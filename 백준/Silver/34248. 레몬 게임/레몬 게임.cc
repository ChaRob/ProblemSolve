#include <iostream>
#include <vector>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, ct = 0, co = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int lemon;
		cin >> lemon;
		if (lemon == 1) co++;
		else ct++;
	}
	if (co < ct || (co - ct) % 3 != 0)
		cout << "No";
	else
		cout << "Yes";
	return 0;
}