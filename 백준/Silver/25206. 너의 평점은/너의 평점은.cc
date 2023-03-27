#include<iostream>
#include<string>
using namespace std;
pair<double, string> a[10] = { {4.5,"A+"}, {4.0,"A0"},{3.5,"B+"},{3.0,"B0"},{2.5,"C+"},{2.0,"C0"},{1.5,"D+"},{1.0,"D0"}, {0.0,"F"}, {0.0,"P"} };
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	cout << fixed;
	cout.precision(6);
	string s;
	double grade_sum = 0, grade_mul_sum = 0, tmp;
	for (int i = 1; i <= 20; i++) {
		cin >> s;
		cin >> s;
		tmp = stod(s);
		cin >> s;
		for (int j = 0; j < 10; j++) {
			if (a[j].second == s && s!="P") {
				grade_sum += tmp;
				grade_mul_sum += tmp * a[j].first;
			}
		}
	}
	cout << grade_mul_sum / grade_sum;
	return 0;
}