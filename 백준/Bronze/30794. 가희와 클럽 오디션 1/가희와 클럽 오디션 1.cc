#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	string noteType;
	cin >> n >> noteType;
	if (noteType == "miss") cout << 0;
	else if (noteType == "bad") cout << n * 200;
	else if (noteType == "cool") cout << n * 400;
	else if (noteType == "great") cout << n * 600;
	else if (noteType == "perfect") cout << n * 1000;
	return 0;
}