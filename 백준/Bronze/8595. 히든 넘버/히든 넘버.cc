#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	long long sum = 0;
	string s;
	cin >> n >> s;
	int i = 0, j;
	while (i < s.size())
	{
		if (isdigit(s[i])) {
			string tmp;
			tmp += s[i];
			j = 0;
			while (true)
			{
				j++;
				if (s.size() > i + j && isdigit(s[i + j])) {
					tmp += s[i + j];
				}
				else break;
			}
			sum += stoi(tmp, nullptr);
			i += j;
		}
		else {
			i++;
		}
	}
	cout << sum;
	return 0;
}