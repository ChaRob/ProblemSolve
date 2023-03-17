#include<iostream>
using namespace std;
int main() {
	char S[101];
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	while (1){
		cin.getline(S,101);
		if (cin.eof()) { break; }
		cout << S << "\n";
	}
	return 0;
}