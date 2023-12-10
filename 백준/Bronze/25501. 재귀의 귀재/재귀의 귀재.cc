#include<iostream>
#include<string.h>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		string S;
		cin >> S;
		short callCnt = 1, isPalindrome = 1;
		short left = 0, right = S.size() - 1;
		while (left < right) {
			if (S[left] != S[right]) {
				isPalindrome = 0;
				break;
			}
			callCnt++;
			left++;
			right--;
		}
		cout << isPalindrome << " " << callCnt << "\n";
	}
	return 0;
}