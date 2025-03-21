#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	bool check = false;
	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		if (input == "anj") check = true;
	}
	if (check)
	{
		cout << "뭐야;";
	}
	else cout << "뭐야?";
	return 0;
}