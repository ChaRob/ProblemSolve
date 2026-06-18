#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int answer = 2;
    sort(sides.begin(), sides.end());
    if (sides[2] < sides[0] + sides[1])
        answer = 1;
    return answer;
}