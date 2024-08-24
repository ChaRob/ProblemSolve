#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string input;
	getline(cin, input);

	stringstream ss(input);
	string token;
	long long sum = 0;

	while (getline(ss, token, ',')) {
		sum += stoi(token);
	}
	cout << sum;
	return 0;
}