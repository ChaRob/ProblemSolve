#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string a, b;
	cin >> a >> b;
	for (size_t i = 0; i < a.size(); i++)
	{
		if (a[i] == '6') {
			a[i] = '5';
		}
	}
	for (size_t i = 0; i < b.size(); i++)
	{
		if (b[i] == '6') {
			b[i] = '5';
		}
	}
	cout << stoi(a) + stoi(b) << " ";
	for (size_t i = 0; i < a.size(); i++)
	{
		if (a[i] == '5') {
			a[i] = '6';
		}
	}
	for (size_t i = 0; i < b.size(); i++)
	{
		if (b[i] == '5') {
			b[i] = '6';
		}
	}
	cout << stoi(a) + stoi(b);

	return 0;
}