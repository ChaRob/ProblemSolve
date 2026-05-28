#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int count = 1;
    while (count < arr.size())
    {
        count = count << 1;
    }
    for (int i = arr.size(); i < count; i++)
        arr.push_back(0);
    return arr;
}