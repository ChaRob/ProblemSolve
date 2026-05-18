#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer;
    int s = 0, e = arr.size();
    for (int i = 0; i < query.size(); i++)
    {
        if (i % 2 == 0)
            e = query[i] + s;
        else
            s = query[i] + s;
    }
    for (int i = s; i <= e; i++)
    {
        answer.push_back(arr[i]);
    }
    return answer;
}