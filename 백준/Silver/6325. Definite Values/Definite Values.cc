#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int pc = 1;
	while (true)
	{
		int n;
		cin >> n;
		if (n == 0) break;
		map<string, int> defines = { {"a", 1} };
		for (int i = 0; i < n; i++)
		{
			string left, right, op;
			cin >> left >> op >> right;
			if (defines.find(right) != defines.end() && defines[right] == 1)
			{
				defines[left] = 1;
			}
			else {
				defines[left] = 0;
			}
		}
		cout << "Program #" << pc << "\n";
		int defCount = 0;
		for (auto& def : defines)
		{
			if (def.second == 1)
			{
				cout << def.first << " ";
				defCount++;
			}
		}
		if (defCount == 0)
		{
			cout << "none";
		}
		pc++;
		cout << "\n\n";
	}
	return 0;
}