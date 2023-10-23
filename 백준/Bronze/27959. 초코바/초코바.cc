#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	if (n * 100 >= m) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	
	return 0;
}