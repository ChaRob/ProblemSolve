#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0, dist = 999;
    for (int i : array)
    {
        int d = i - n;
        if (abs(d) < dist ||
           (abs(d) == dist && i < answer))
        {
            dist = abs(d);
            answer = i;
        }
    }
    return answer;
}