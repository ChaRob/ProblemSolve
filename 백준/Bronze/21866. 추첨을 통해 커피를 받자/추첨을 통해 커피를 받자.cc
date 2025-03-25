#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n[9], sum = 0, score[9] = {100,100,200,200,300,300,400,400,500};
	bool hacker = false;
	for (int i = 0; i < 9; i++)
	{
		cin >> n[i];
		sum += n[i];
		if (n[i] > score[i]) hacker = true;
	}
	if (hacker) cout << "hacker";
	else if (sum < 100) cout << "none";
	else cout << "draw";
	return 0;
}