#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0, sums = 0, multi = 1;
    for (int i = 0; i < num_list.size(); i++)
    {
        sums += num_list[i];
        multi *= num_list[i];
    }
    sums = sums * sums;
    if (sums > multi)
        answer = 1;
    return answer;
}