#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
        for (int i = 0; i < arr.size(); i++)
    {
        int target = arr[i];
        bool nope = true;
        for (int j = 0; j < delete_list.size(); j++)
        {
            if (target == delete_list[j])
            {
                nope = false;
                break;
            }
        }
        if (nope)
            answer.push_back(target);
    }
    return answer;
}