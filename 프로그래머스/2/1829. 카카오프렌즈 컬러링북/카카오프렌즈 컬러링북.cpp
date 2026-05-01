#include <vector>
#include <queue>

using namespace std;

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> solution(int m, int n, vector<vector<int>> picture) {
    int number_of_area = 0;
    int max_size_of_one_area = 0;
    int dx[4] = { -1,1,0,0 };
    int dy[4] = { 0,0,-1,1 };
    vector<vector<bool>> visited(m, vector<bool>(n, false));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!visited[i][j] && picture[i][j] != 0)
            {
                number_of_area++;
                queue<pair<int, int>> que;
                que.push({ i,j });
                visited[i][j] = true;
                int targetColor = picture[i][j];
                int size = 1;
                while (!que.empty())
                {
                    int x = que.front().first;
                    int y = que.front().second;
                    que.pop();
                    for (int d = 0; d < 4; d++)
                    {
                        int nx = x + dx[d];
                        int ny = y + dy[d];
                        if (nx >= 0 && nx < m && ny >= 0 && ny < n && !visited[nx][ny] && picture[nx][ny] == targetColor)
                        {
                            visited[nx][ny] = true;
                            size++;
                            que.push({ nx, ny });
                        }
                    }
                }
                if (max_size_of_one_area < size)
                    max_size_of_one_area = size;
            }
        }
    }
    vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    return answer;
}