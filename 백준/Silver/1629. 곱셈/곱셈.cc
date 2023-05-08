#include<iostream>
using namespace std;

typedef long long int ll;

ll a, b, c;

ll multi(ll cnt) {
	if (cnt == 1) {
		return a % c;
	}
	ll result, mulres = multi(cnt / 2) % c;
	if (cnt % 2 == 1) {
		result = ((mulres * mulres) % c * a) % c;
	}
	else {
		result = (mulres * mulres) % c;
	}
	return result;
}

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	cin >> a >> b >> c;
	cout << multi(b);

	return 0;
}