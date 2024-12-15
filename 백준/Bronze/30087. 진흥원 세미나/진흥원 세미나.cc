#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string, string> cermina = {{"Algorithm","204"},{"DataAnalysis","207"} ,{"ArtificialIntelligence","302"}
,{"CyberSecurity","B101"},{"Network","303"},{"Startup","501"},{"TestStrategy","105"} };

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		cout << cermina[input] << "\n";
	}
	return 0;
}