#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(int n) {
    set<int> answer;
    for (int idx = 2; idx <= 10000; idx++)
    {
        while (n % idx == 0)
        {
            n /= idx;
            answer.insert(idx);
        }
    }
    return vector<int>(answer.begin(), answer.end());
}