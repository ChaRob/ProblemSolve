#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string myString, string pat) {
    transform(myString.begin(), myString.end(), myString.begin(),
        [](unsigned char ch)
        {
            return static_cast<char>(tolower(ch));
        });
    transform(pat.begin(), pat.end(), pat.begin(),
        [](unsigned char ch)
        {
            return static_cast<char>(tolower(ch));
        });
    for (int i = 0; i <= (int)myString.size() - (int)pat.size(); i++)
    {
        bool check = true;
        for (int j = 0; j < pat.size(); j++)
        {
            if (i + j >= myString.size() || myString[i + j] != pat[j])
            {
                check = false;
                break;
            }
        }
        if (check)
            return 1;
    }
    return 0;
}