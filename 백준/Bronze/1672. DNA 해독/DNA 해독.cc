#include <iostream>
#include <string>
#include <map>
using namespace std;

map<pair<char, char>, char> DNASquence = {
	{{'A','A'}, 'A'}, {{'A','G'}, 'C'}, {{'A','C'}, 'A'}, {{'A','T'}, 'G'},
	{{'G','A'}, 'C'}, {{'G','G'}, 'G'}, {{'G','C'}, 'T'}, {{'G','T'}, 'A'},
	{{'C','A'}, 'A'}, {{'C','G'}, 'T'}, {{'C','C'}, 'C'}, {{'C','T'}, 'G'},
	{{'T','A'}, 'G'}, {{'T','G'}, 'A'}, {{'T','C'}, 'G'}, {{'T','T'}, 'T'},
};

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	string dna;
	cin >> n >> dna;
	char now = dna.back();
	dna.pop_back();
	while (dna.size() > 0)
	{
		char modify = dna.back();
		dna.pop_back();
		now = DNASquence[make_pair(now, modify)];
	}
	std::cout << now;
	return 0;
}