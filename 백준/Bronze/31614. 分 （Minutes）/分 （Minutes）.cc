#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int H, M;
	cin >> H >> M;
	cout << H * 60 + M;
	return 0;
}