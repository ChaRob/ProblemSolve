#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int odd = 0, even = 0;
    for (int i = 1; i <= num_list.size(); i++)
    {
        if (i % 2 == 0)
            even += num_list[i - 1];
        else
            odd += num_list[i - 1];
    }
    return (even > odd)? even : odd;
}