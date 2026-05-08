#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    set<int> phoneketmon;
    for (int i = 0; i < nums.size(); i++)
    {
        phoneketmon.insert(nums[i]);
        if (phoneketmon.size() == nums.size() / 2)
            break;
    }
    return phoneketmon.size();
}