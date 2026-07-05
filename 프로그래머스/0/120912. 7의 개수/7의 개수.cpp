#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    for (int i : array)
    {
        while (i > 0)
        {
            int tmp = i % 10;
            if (tmp == 7)
                answer++;
            i /= 10;
        }
    }
    return answer;
}