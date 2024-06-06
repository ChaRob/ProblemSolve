#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int k, n, cnt = 0, best_record = 9999999;
		cin >> k;
		vector<string> students;
		string student, best;
		for (int i = 0; i < k; i++)
		{
			cin >> student;
			students.push_back(student);
		}
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			int h, m;
			cin >> student >> h >> m;
			if (h == -1) continue;

			m += h * 60;
			for (vector<string>::iterator iter = students.begin(); iter < students.end(); iter++)
			{
				if (*iter == student) {
					if (m <= 360) cnt++;

					if (m < best_record) {
						best = student;
						best_record = m;
					}
				}
			}
		}
		cout << best << " " << cnt << "\n";
	}
	return 0;
}