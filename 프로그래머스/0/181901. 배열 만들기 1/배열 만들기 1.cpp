#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int k) {
    vector<int> answer(n / k);
    int i = k, idx = 0;
    while (i <= n)
    {
        answer[idx++] = i;
        i += k;
    }
    return answer;
}