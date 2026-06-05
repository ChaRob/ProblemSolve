#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    for(int i = 0; i < n; i++)
    {
        vector<int> row;
        for(int j = 0; j < n; j++)
        {
            row.push_back((i == j ? 1 : 0));
        }
        answer.push_back(row);
    }
    return answer;
}