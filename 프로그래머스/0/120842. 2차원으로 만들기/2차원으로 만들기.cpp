#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    int idx = 0;
    for (int i = 0; i < num_list.size() / n; i++)
    {
        vector<int> row(n);
        for (int j = 0; j < n; j++)
        {
            row[j] = num_list[idx++];
        }
        answer.push_back(row);
    }
    return answer;
}