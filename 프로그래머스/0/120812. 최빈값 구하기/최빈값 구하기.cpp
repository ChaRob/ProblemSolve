#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = -1, often = 0;
    int count[1000] = {};
    for(int i = 0; i < array.size(); i++)
        count[array[i]]++;
    for(int i = 0; i < 1000; i++)
    {
        if (count[i] == 0)
            continue;
        
        if (count[i] > often)
        {
            answer = i;
            often = count[i];
        }
        else if (count[i] == often && answer != -1)
        {
            answer = -1;
        }
    }
    return answer;
}