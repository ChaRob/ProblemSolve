#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string a, b;
	cin >> a >> b;
	int cnt_a[26] = {};
	int cnt_b[26] = {};
	for (int i = 0; i < a.size(); i++)
	{
		cnt_a[a[i] - 'a']++;
	}
	for (int i = 0; i < b.size(); i++)
	{
		cnt_b[b[i] - 'a']++;
	}
	int answer = 0;
	for (int i = 0; i < 26; i++)
	{
		if (cnt_a[i] > cnt_b[i]) {
			answer += cnt_a[i] - cnt_b[i];
		}
		else if (cnt_a[i] < cnt_b[i]) {
			answer += cnt_b[i] - cnt_a[i];
		}
	}
	cout << answer;
	return 0;
}