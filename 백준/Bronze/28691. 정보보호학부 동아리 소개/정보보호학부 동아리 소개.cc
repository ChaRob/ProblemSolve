#include<iostream>
#include<string.h>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	char a, res[10] = "";
	cin >> a;
	switch (a)
	{
	case 'M':
		strcpy(res, "MatKor");
		break;
	case 'W':
		strcpy(res, "WiCys");
		break;
	case 'C':
		strcpy(res, "CyKor");
		break;
	case 'A':
		strcpy(res, "AlKor");
		break;
	case '$':
		strcpy(res, "$clear");
		break;
	}
	cout << res;
	return 0;
}