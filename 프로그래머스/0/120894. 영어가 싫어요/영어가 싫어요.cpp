#include <string>
#include <vector>

using namespace std;

string numberStr[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

long long solution(string numbers) {
    long long answer = 0;
    while (numbers.size() > 0)
    {
        answer *= 10;
        for (int i = 0; i < 10; i++)
        {
            string target = numberStr[i];
            if (target == numbers.substr(0, target.size()))
            {
                answer += i;
                numbers = numbers.substr(target.size());
                break;
            }
        }
    }
    return answer;
}