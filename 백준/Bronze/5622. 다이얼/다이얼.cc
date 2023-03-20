#include<iostream>
#include<string>
using namespace std;
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	string dial;
	int alpha[26] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	int time = 0;
	cin >> dial;
	for (int i = 0; i < dial.length(); i++) {
		time += alpha[int(dial[i]) - 65];
	}
	cout << time;
	return 0;
}