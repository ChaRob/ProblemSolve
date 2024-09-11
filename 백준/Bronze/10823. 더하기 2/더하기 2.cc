#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string sen, tmp;
	long long sum = 0;
	while (cin >> tmp) {
		sen += tmp;
	}
	stringstream ss(sen);
	while (getline(ss,tmp,',')) {
		int num = stoi(tmp);
		sum += num;
	}
	cout << sum;
	return 0;
}