#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer(emergency.size());
    for (int i = 0; i < emergency.size(); i++)
    {
        int maxEmergency = 0;
        int targetIndex = 0;
        for (int j = 0; j < emergency.size(); j++)
        {
            if (answer[j] == 0 && maxEmergency < emergency[j])
            {
                maxEmergency = emergency[j];
                targetIndex = j;
            }
        }
        answer[targetIndex] = i + 1;
    }
    return answer;
}