#include <iostream>
#include <string>
#include <vector>
using namespace std;

pair<int, int> Fraction(const string& str)
{
	int num = 0, den = 1, w = 0;


	int comma = str.find(",");
	if (comma != string::npos)
	{
		string comPrev = str.substr(0, comma);
		string comNext = str.substr(comma + 1);

		int slash = comNext.find("/");
		string slashPrev = comNext.substr(0, slash);
		string slashNext = comNext.substr(slash + 1);

		w = stoi(comPrev);
		num = stoi(slashPrev);
		den = stoi(slashNext);

		num = num + w * den;
	}
	else
	{
		int slash = str.find("/");
		if (slash != string::npos)
		{
			string slashPrev = str.substr(0, slash);
			string slashNext = str.substr(slash + 1);

			w = 0;
			num = stoi(slashPrev);
			den = stoi(slashNext);
		}
		else
		{
			w = 0;
			num = stoi(str);
			den = 1;
		}
	}

	return { num, den };
}

int Gcd(int a, int b)
{
	while (b > 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	int testNum = 1;
	while (true)
	{
		cin >> n;
		if (n == 0) break;
		int w = 0, den = 1, num = 0;
		for (int i = 0; i < n; i++)
		{
			string input;
			cin >> input;
			pair<int, int> data = Fraction(input);
			
			num = num * data.second + data.first * den;
			den = den * data.second;
			int gcd = Gcd(num, den);
			num /= gcd;
			den /= gcd;
		}
		w = num / den;
		num = num % den;

		cout << "Test " << testNum++ << ": ";
		if (w != 0 && num == 0)
		{
			cout << w;
		}
		else if (w != 0 && num != 0)
		{
			cout << w << "," << num << "/" << den;
		}
		else if (num != 0 && den != 1)
		{
			cout << num << "/" << den;
		}
		else
		{
			cout << num;
		}
		cout << "\n";
	}
	return 0;
}