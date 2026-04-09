#include <iostream>
#include <string>
#include <vector>
using namespace std;
const vector<string> segment = { "063","010","093","079","106","103","119","011","127","107" };

int ConvertFromSegmentCode(string& str)
{
    int value = 0;
    for (int i = 0; i < 10; i++)
    {
        if (segment[i] == str)
        {
            value = i;
            str = "";
            break;
        }
    }
    return value;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string line;
    while (cin >> line)
    {
        if (line == "BYE")
            break;
        cout << line;

        string a, b, cal, ansStr;
        int val_a = 0, val_b = 0, ans;
        int calCheck = -1;
        for (int i = 0; i < line.size(); i++)
        {
            if (line[i] == '+' ||
                line[i] == '=')
                calCheck++;

            if (calCheck == 1)
            {
                b += line[i];
                if (b.size() == 3)
                    val_b = val_b * 10 + ConvertFromSegmentCode(b);
            }
            else if (calCheck == 0)
            {
                cal += line[i];
                calCheck++;
            }
            else if (calCheck == -1)
            {
                a += line[i];
                if (a.size() == 3)
                    val_a = val_a * 10 + ConvertFromSegmentCode(a);
            }
        }
        ans = val_a + val_b;
        while (ans > 0)
        {
            int idx = ans % 10;
            ansStr = segment[idx] + ansStr;
            ans /= 10;
        }
        cout << ansStr << "\n";
    }
    return 0;
}