#include<iostream>
#include<string.h>
#include<map>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	map<string, bool> people;
	string name, log;
	for (int i = 0; i < n; i++)
	{
		cin >> name >> log;
		if (log == "enter") {
			people[name] = true;
		}
		else {
			people[name] = false;
		}
	}
	for (auto i = people.crbegin(); i != people.crend(); ++i)
	{
		if(i->second == true){
			cout << i->first << "\n";
		}
	}

	return 0;
}