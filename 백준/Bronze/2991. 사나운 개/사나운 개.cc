#include <iostream>

using namespace std;

int answer(const int& a, const int& b, const int& c, const int& d, const int& t) {
	int cnt = 0, time = a;
	bool rest_a = false, rest_b = false;
	while (time < t)
	{
		if (rest_a) {
			time += a;
			rest_a = false;
		}
		else {
			time += b;
			rest_a = true;
		}
	}
	if (!rest_a) cnt++;
	time = c;
	while (time < t)
	{
		if (rest_b) {
			time += c;
			rest_b = false;
		}
		else {
			time += d;
			rest_b = true;
		}
	}
	if (!rest_b) cnt++;
	return cnt;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b, c, d, v[3];
	cin >> a >> b >> c >> d >> v[0] >> v[1] >> v[2];
	for (size_t i = 0; i < 3; i++)
	{
		cout << answer(a, b, c, d, v[i]) << "\n";
	}
	return 0;
}