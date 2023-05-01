#include<iostream>
#include<string>
using namespace std;

string contest[25] = {
	"ITMO", "SPbSU", "SPbSU", "ITMO", "ITMO",
	"SPbSU", "ITMO", "ITMO", "ITMO", "ITMO",
	"ITMO", "PetrSU, ITMO", "SPbSU", "SPbSU", "ITMO",
	"ITMO", "ITMO", "ITMO", "SPbSU", "ITMO",
	"ITMO", "ITMO", "ITMO", "SPbSU", "ITMO"
};

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int y;
	cin >> y;
	cout << contest[y-1995];
	return 0;
}