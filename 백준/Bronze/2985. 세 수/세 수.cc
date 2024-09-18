#include <iostream>
using namespace std;

char Cal(int& a, int& b, int& ans) {
	char res = '\0';
	if (a + b == ans) res = '+';
	else if (a - b == ans) res = '-';
	else if (a * b == ans) res = '*';
	else if (a / b == ans) res = '/';
	return res;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b, c;
	cin >> a >> b >> c;
	char f, s;
	f = Cal(a, b, c);
	s = '=';
	if (f == '\0') {
		s = Cal(b, c, a);
		f = '=';
	}
	cout << a << f << b << s << c;
	return 0;
}