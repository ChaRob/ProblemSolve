#include <iostream>
#include <string>
using namespace std;

bool FailCheck(int& s1, int& s2, int& s3) {
	if (s1 + s2 + s3 < 55) return false;
	if (s1 <= 10) return false;
	if (s2 <= 7) return false;
	if (s3 < 12) return false;
	return true;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T, num, s1, s2, s3;
	string res;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		cin >> num >> s1 >> s2 >> s3;
		cout << num << " ";
		if (FailCheck(s1, s2, s3)) res = " PASS\n";
		else					   res = " FAIL\n";
		cout << s1 + s2 + s3 << res;
	}
	return 0;
}