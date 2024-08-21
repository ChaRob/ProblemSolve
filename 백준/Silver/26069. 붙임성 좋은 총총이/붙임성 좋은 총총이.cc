#include <iostream>
#include <map>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, cnt = 0;
	cin >> n;
	map<string, bool> person;
	for (int i = 0; i < n; i++)
	{
		string a, b;
		cin >> a >> b;
		if (person.find(a) == person.end()) {
			person.insert(make_pair(a, false));
		}
		if (person.find(b) == person.end()) {
			person.insert(make_pair(b, false));
		}

		if (a == "ChongChong") person[a] = true;
		if (b == "ChongChong") person[b] = true;

		if (person[a] == true) {
			person[b] = true;
		}
		if (person[b] == true || b == "ChongChong") {
			person[a] = true;
		}
	}
	for (auto& s : person)
	{
		if (s.second) cnt++;
	}
	cout << cnt;
	return 0;
}