#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    set<int> hasNumber;
    int count = 0;
    for (int i = 0; i < arr.size() && count < k; i++)
    {
        auto find = hasNumber.find(arr[i]);
        if (find == hasNumber.end())
        {
            answer.push_back(arr[i]);
            hasNumber.insert(arr[i]);
            count++;
        }
    }
    if (count < k)
    {
        for (int i = count; i < k; i++)
            answer.push_back(-1);
    }
    return answer;
}