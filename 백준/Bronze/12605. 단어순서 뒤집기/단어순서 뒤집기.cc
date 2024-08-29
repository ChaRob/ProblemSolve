#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string T;
	getline(cin, T);
	for (int t = 1; t <= stoi(T,nullptr); t++)
	{
		string line;
		getline(cin, line);
		stringstream ss(line);
		string tmp;
		vector<string> vec;
		while (getline(ss, tmp, ' ')) {
			vec.push_back(tmp);
		}
		cout << "Case #" << t << ": ";
		while (!vec.empty()) {
			cout << vec.back() << " ";
			vec.pop_back();
		}
		cout << "\n";
	}
	return 0;
}