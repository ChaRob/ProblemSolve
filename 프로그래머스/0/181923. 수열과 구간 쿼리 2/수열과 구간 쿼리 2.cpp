#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for (auto query : queries)
    {
        int s = query[0];
        int e = query[1];
        int k = query[2];
        int min = 1e9;
        bool found = false;
        for (int i = s; i <= e; i++)
        {
            if (arr[i] <= k)
                continue;
            found = true;

            if (min > arr[i])
                min = arr[i];
        }
        if (!found)
            min = -1;
        answer.push_back(min);
    }
    return answer;
}