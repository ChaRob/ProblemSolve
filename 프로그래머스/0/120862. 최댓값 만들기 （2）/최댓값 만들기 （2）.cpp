#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = -1e9;
    for (int i = 0; i < numbers.size() - 1; i++)
    {
        for (int j = i + 1; j < numbers.size(); j++)
        {
            int mul = numbers[i] * numbers[j];
            if (answer < mul)
                answer = mul;
        }
    }
    return answer;
}