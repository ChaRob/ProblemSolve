#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string input;
	cin >> input;
	int cnt = 0, i = input.find("DKSH", 0);
	while (i != string::npos)
	{
		cnt++;
		i = input.find("DKSH", i + 4);
	}
	cout << cnt;
	return 0;
}