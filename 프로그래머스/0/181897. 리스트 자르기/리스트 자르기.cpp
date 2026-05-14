#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    vector<int> answer;
    int idx = 0, last = slicer[1];
    if (n != 1)
        idx = slicer[0];
    if (n == 2)
        last = num_list.size() - 1;
    while (idx <= last)
    {
        answer.push_back(num_list[idx]);
        if (n == 4)
            idx += slicer[2];
        else
            idx++;
    }
    return answer;
}