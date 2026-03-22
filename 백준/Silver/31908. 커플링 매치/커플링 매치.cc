#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	map<string, vector<string>> connections;
	for (int i = 0; i < n; i++)
	{
		string name, ring;
		cin >> name >> ring;
		if (ring == "-")
			continue;

		auto it = connections.find(ring);
		if (it != connections.end())
			it->second.push_back(name);
		else
			connections[ring] = { name };
	}
	int cnt = 0;
	string answer = "";
	for (auto it : connections)
	{
		if (it.second.size() == 2)
		{
			cnt++;
			for (auto name : it.second)
			{
				answer += name + " ";
			}
			answer += "\n";
		}
	}
	cout << cnt << "\n" << answer;
	return 0;
}