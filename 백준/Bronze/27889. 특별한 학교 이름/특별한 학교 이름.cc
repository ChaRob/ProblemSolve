#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	string input;
	cin >> input;
	if (input == "NLCS") {
		cout << "North London Collegiate School";
	}
	else if (input == "BHA") {
		cout << "Branksome Hall Asia";
	}
	else if (input == "KIS") {
		cout << "Korea International School";
	}
	else if (input == "SJA") {
		cout << "St. Johnsbury Academy";
	}
	return 0;
}