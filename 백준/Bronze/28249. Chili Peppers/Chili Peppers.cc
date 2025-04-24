#include <iostream>
#include <map>
#include <string>
using namespace std;

map<string, int> scolville = {
	{"Poblano", 1500},
	{"Mirasol", 6000},
	{"Serrano", 15500},
	{"Cayenne", 40000},
	{"Thai", 75000},
	{"Habanero", 125000}
};

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	long long n, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		sum += scolville[input];
	}
	cout << sum;
	return 0;
}