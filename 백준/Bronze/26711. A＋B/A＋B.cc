#include<iostream>
#include<string>
using namespace std;

int A_int[5001] = { 0 }, A_idx = 0;
int B_int[5001] = { 0 }, B_idx = 0;
char a, b;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	string A, B;
	cin >> A >> B;
	for (int i = A.size()-1; i >= 0; i--)
	{
		A_int[A_idx] = (int)A[i] - 48;
		A_idx++;
	}
	for (int i = B.size() - 1; i >= 0; i--)
	{
		B_int[B_idx] = (int)B[i] - 48;
		B_idx++;
	}
	int upper = 0;
	int max_idx = (A_idx > B_idx) ? A_idx : B_idx;
	for (int i = 0; i <= max_idx; i++)
	{
		A_int[i] += B_int[i] + upper;
		if (A_int[i] >= 10) {
			A_int[i] -= 10;
			upper = 1;
		}
		else {
			upper = 0;
		}
	}
	if (A_int[max_idx] != 0) cout << A_int[max_idx];
	for (int i = max_idx-1; i >= 0; i--)
	{
		cout << A_int[i];
	}
	
	return 0;
}