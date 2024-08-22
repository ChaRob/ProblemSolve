#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	char lastWinner = 'D';
	int A[10] = {}, B[10] = {};
	int scoreA = 0, scoreB = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> A[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cin >> B[i];
	}
	for (int i = 0; i < 10; i++)
	{
		if (A[i] > B[i]) {
			lastWinner = 'A';
			scoreA += 3;
		}
		else if(A[i] < B[i]) {
			lastWinner = 'B';
			scoreB += 3;
		}
		else {
			scoreA++;
			scoreB++;
		}
	}
	cout << scoreA << " " << scoreB << "\n";
	if (scoreA > scoreB) cout << "A";
	else if (scoreA < scoreB) cout << "B";
	else cout << lastWinner;
	return 0;
}