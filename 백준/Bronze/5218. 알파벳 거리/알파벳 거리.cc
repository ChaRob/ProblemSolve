#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		string a, b;
		cin >> a >> b;
		cout << "Distances: ";
		for (int i = 0; i < a.size(); i++)
		{
			int distance = b[i] - a[i];
			if (distance < 0) {
				distance += 26;
			}
			cout << distance << " ";
		}
		cout << "\n";
	}
	return 0;
}