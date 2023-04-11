#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> scores) {
	vector<vector<int>> last;
	int target_sum = scores[0][0] + scores[0][1];
    int a = scores[0][0], b = scores[0][1];
	for (size_t i = 0; i < scores.size(); i++)
	{
		scores[i].push_back(i);
        if (a<scores[i][0] && b<scores[i][1]){
            return -1;
        }
	}
	sort(scores.begin(), scores.end(), [](vector<int> a, vector<int> b) {
        if (a[0] == b[0]) {
			return a[1] < b[1];
		}
		return a[0] > b[0];
	});

	last.push_back({scores[0][0] + scores[0][1], scores[0][2]});
	for (size_t i = 1; i < scores.size(); i++)
	{
		if (target_sum <= scores[i][0] + scores[i][1]) {
			int j = i - 1;
			bool check = false;
			while (j >= 0) {
				if (scores[i][1] < scores[j][1]) {
					check = true;
					break;
				}
				j--;
			}
			if (!check) {
				last.push_back({ scores[i][0] + scores[i][1], scores[i][2] });
			}
		}
	}

	sort(last.begin(), last.end(), greater<vector<int>>());
	int tmp = 0, answer = 1;
	if (last[0][1] == 0) {
		return answer;
	}
	for (size_t i = 1; i < last.size(); i++)
	{
		if (last[i][0] < last[i - 1][0]) {
			answer += tmp + 1;
			tmp = 0;
		}
		else if (last[i][0] == last[i - 1][0]) {
			tmp++;
		}

		if (last[i][1] == 0) {
			break;
		}
	}
	return answer;
}