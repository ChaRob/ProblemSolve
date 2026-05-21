#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    for (int x = 0; ; x++)
    {
        vector<int> tmp = arr;
        bool check = true;
        for (int i = 0; i < tmp.size(); i++)
        {
            if (tmp[i] >= 50 && tmp[i] % 2 == 0)
                tmp[i] /= 2;
            else if (arr[i] <= 50 && arr[i] % 2 > 0)
                tmp[i] = tmp[i] * 2 + 1;
            
            if (tmp[i] != arr[i])
                check = false;
        }
        if (check == true)
            break;
        answer++;
        arr = tmp;
    }
    return answer;
}