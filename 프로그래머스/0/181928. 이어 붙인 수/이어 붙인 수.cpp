#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    string oddStr, evenStr;
    for (auto i : num_list)
    {
        char c = '0' + i;
        if (i % 2 == 0)
            evenStr += c;
        else
            oddStr += c;
    }
    int odd = stoi(oddStr);
    int even = stoi(evenStr);
    return odd + even;
}