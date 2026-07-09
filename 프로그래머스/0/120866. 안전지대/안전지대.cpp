#include <string>
#include <vector>

using namespace std;

int dx[8] = {-1,0,1,-1,1,-1,0,1};
int dy[8] = {-1,-1,-1,0,0,1,1,1};

int solution(vector<vector<int>> board) {
    int answer = 0;
    int n = board.size();
    vector<vector<bool>> isDanger(n, vector<bool>(n, false));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] == 1)
            {
                isDanger[i][j] = true;
                for (int d = 0; d < 8; d++)
                {
                    int nx = i + dx[d];
                    int ny = j + dy[d];
                    
                    if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                        continue;
                    
                    isDanger[nx][ny] = true;
                }
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (isDanger[i][j] == false)
                answer++;
        }
    }
    return answer;
}