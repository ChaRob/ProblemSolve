#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

struct KDA {
	ll k;
	ll d;
	ll a;

	KDA(ll _k, ll _d, ll _a)
	{
		k = _k;
		d = _d;
		a = _a;
	}
};

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		ll m, k, d, a;
		cin >> m;
		vector<KDA> missions;
		for (int j = 0; j < m; j++)
		{
			ll K, D, A;
			cin >> K >> D >> A;
			missions.push_back(KDA(K, D, A));
		}
		cin >> k >> d >> a;
		ll donation = 0;
		for (int j = 0; j < m; j++)
		{
			KDA kda = missions[j];
			ll pay = kda.k * k + kda.a * a - kda.d * d;
			if (pay < 0) continue;
			donation += pay;
		}
		cout << donation << "\n";
	}
	return 0;
}