#include<iostream>
using namespace std;

int main()
{
	cout.tie(NULL);
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int wc, hc, ws, hs;
	cin >> wc >> hc >> ws >> hs;
	if (wc - ws >= 2 && hc - hs >= 2) {
		cout << 1;
	}
	else {
		cout << 0;
	}
	return 0;
}