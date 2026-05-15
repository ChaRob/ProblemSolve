#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int start = -1, end = 1e9;
    for (int i = 0; i < arr.size(); i++)
    {
        int j = arr.size() - 1 - i;
        if (start != -1 && end != 1e9)
            break;
        
        if (start == -1 && arr[i] == 2)
            start = i;
        if (end == 1e9 && arr[j] == 2)
            end = j;
    }
    if (start < 0 && end > 1000000)
        answer.push_back(-1);
    else
    {
        for (int i = start; i <= end; i++)
            answer.push_back(arr[i]);
    }
    return answer;
}