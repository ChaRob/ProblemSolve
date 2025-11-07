#include <iostream>
#include <string>
#include <vector>
using namespace std;

int delta[8][2] = {
    {-1, -1}, {-1, 0}, {-1, 1},
    {0, -1},          {0, 1},
    {1, -1},  {1, 0},  {1, 1}
};

bool CheckIsConsecutive(const vector<string>& _board, char _player)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (_board[i][j] == _player)
            {
                for (int d = 0; d < 8; d++)
                {
                    int nx = i;
                    int ny = j;
                    int cnt = 1;
                    while (true)
                    {
                        nx += delta[d][0];
                        ny += delta[d][1];
                        if (nx < 0 || nx >= 5 || ny < 0 || ny >= 5) break;

                        if (_board[nx][ny] == _player)
                        {
                            cnt++;
                            if (cnt == 3) return true;
                        }
                        else break;
                    }
                }
            }
        }
    }
    return false;
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        vector<string> board(5);
        for (int i = 0; i < 5; i++)
        {
            cin >> board[i];
        }
        bool aCheck = CheckIsConsecutive(board, 'A');
        bool bCheck = CheckIsConsecutive(board, 'B');
        if ((aCheck && bCheck) || (!aCheck && !bCheck)) cout << "draw\n";
        else if (aCheck) cout << "A wins\n";
        else cout << "B wins\n";
    }
    return 0;
}
