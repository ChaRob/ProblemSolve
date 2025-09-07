#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int first = 0, hard = 0, ez = 1001;
	for (int i = 0; i < n; i++)
	{
		int problem;
		cin >> problem;
		if (i == 0) first = problem;
		ez = (ez < problem) ? ez : problem;
		hard = (hard > problem) ? hard : problem;
	}
	if (first == ez)
		cout << "ez";
	else if (first == hard)
		cout << "hard";
	else
		cout << "?";
	return 0;
}