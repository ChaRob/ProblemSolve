#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int S;
	cin >> S;
	for (int i = 0; i < S; i++)
	{
		string str;
		getline(cin, str);
		if (str.empty()) // Handle the case where the first line is empty
		{
			getline(cin, str);
		}
		int con = 0, vow = 0;
		for (int j = 0; j < str.length(); j++)
		{
			if (str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u' ||
				str[j] == 'A' || str[j] == 'E' || str[j] == 'I' || str[j] == 'O' || str[j] == 'U')
			{
				vow++;
			}
			else if ((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z'))
			{
				con++;
			}
		}
		cout << con << " " << vow << "\n";
	}
	return 0;
}