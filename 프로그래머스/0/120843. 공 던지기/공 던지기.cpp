#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int cnt = 1, target = 0;
    while (cnt < k)
    {
        target = (target + 2) % numbers.size();
        cnt++;
    }
    return numbers[target];
}