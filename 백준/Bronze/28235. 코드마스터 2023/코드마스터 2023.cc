#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	string input;
	cin >> input;
	if (input == "SONGDO") {
		cout << "HIGHSCHOOL";
	}
	else if (input == "CODE") {
		cout << "MASTER";
	}
	else if (input == "2023") {
		cout << "0611";
	}
	else if (input == "ALGORITHM") {
		cout << "CONTEST";
	}
	return 0;
}