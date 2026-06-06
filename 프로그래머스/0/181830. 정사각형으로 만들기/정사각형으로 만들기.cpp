#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    vector<vector<int>> answer;
    int maxLength = (arr.size() > arr[0].size()) ? arr.size() : arr[0].size();
    for (int i = 0; i < maxLength; i++)
    {
        vector<int> vec;
        for (int j = 0; j < maxLength; j++)
        {
            if (j >= arr[i].size())
                vec.push_back(0);
            else
            {
                if (i >= arr.size())
                    vec.push_back(0);
                else
                    vec.push_back(arr[i][j]);
            }
        }
        answer.push_back(vec);
    }
    return answer;
}