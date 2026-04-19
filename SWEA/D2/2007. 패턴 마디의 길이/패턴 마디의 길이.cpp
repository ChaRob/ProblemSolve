#include<iostream>
#include<string>
using namespace std;

int main(int argc, char** argv)
{
	int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        string input;
        cin >> input;
        int ans = 1;
        for (int i = 1; i <= input.size(); i++)
        {
            bool check = true;
            for (int j = 0; j < input.size(); j++)
            {
                if (input[j] != input[j % i])
                {
                    check = false;
                    break;
                }
            }
            if (check)
            {
                ans = i;
                break;
            }
        }
        cout << "#" << t << " " << ans << "\n";
    }
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}