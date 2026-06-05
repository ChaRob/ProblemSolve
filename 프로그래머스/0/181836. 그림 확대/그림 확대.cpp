#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    for (int i = 0; i < picture.size(); i++)
    {
        string sizeUp = "";
        for (char c : picture[i])
            for (int j = 0; j < k; j++)
                sizeUp += c;
        for (int j = 0; j < k; j++)
            answer.push_back(sizeUp);
    }
    return answer;
}