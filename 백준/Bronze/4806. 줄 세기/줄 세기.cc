#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string s;
	int line = 0;
	while (getline(cin,s)) line++;
	cout << line;
	return 0;
}