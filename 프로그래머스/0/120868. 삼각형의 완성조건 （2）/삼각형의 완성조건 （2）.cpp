#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int minD = abs(sides[0] - sides[1]);
    int maxD = sides[0] + sides[1];
    answer = maxD - minD - 1;
    return answer;
}