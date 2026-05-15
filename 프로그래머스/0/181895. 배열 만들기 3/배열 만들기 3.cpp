#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;
    for (int i = 0; i < intervals.size(); i++)
    {
        for (int idx = intervals[i][0]; idx <= intervals[i][1]; idx++)
        {
            answer.push_back(arr[idx]);
        }
    }
    return answer;
}