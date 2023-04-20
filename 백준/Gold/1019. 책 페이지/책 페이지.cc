#include<iostream>
using namespace std;
typedef long long ll;

ll nums[10];

void cal(ll n, ll s) {
	while (n > 0) {
		nums[n % 10] += s;
		n /= 10;
	}
}

void book(ll A, ll B, ll s) {
	while (A % 10 != 0 && A<=B) {
		cal(A, s);
		A++;
	}
	if (A > B) { 
		return;
	}
	while (B % 10 != 9 && A<=B) {
		cal(B, s);
		B--;
	}
	ll count = (B / 10 - A / 10 + 1);
	for (size_t i = 0; i < 10; i++)
	{
		nums[i] += count * s;
	}

	book(A / 10, B / 10, s * 10);
}

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	ll n;
	cin >> n;
	book(1, n, 1);
	for (size_t i = 0; i < 10; i++)
	{
		cout << nums[i] << " ";
	}
	return 0;
}