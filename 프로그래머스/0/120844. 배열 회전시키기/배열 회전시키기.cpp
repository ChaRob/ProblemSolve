#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    if (direction == "right")
    {
        int last = numbers.back();
        numbers.pop_back();
        numbers.insert(numbers.begin(), last);
    }
    else
    {
        int first = numbers.front();
        numbers.erase(numbers.begin());
        numbers.push_back(first);
    }
    return numbers;
}