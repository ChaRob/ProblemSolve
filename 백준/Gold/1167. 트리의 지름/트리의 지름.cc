#include<iostream>
#include<vector>
#include<memory.h>
using namespace std;

long long max_dist;
int max_node;
vector<vector<pair<int, int>>> tree;

void dfs(int start, bool *visited, long long now_dist) {
    for (int j = 0; j < tree[start].size(); j++)
    {
        if (!visited[tree[start][j].first]) {
            visited[tree[start][j].first] = true;
            if (max_dist < now_dist + tree[start][j].second) {
                max_dist = now_dist + tree[start][j].second;
                max_node = tree[start][j].first;
            }
            dfs(tree[start][j].first, visited, now_dist + tree[start][j].second);
        }
    }
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, par, chi, dist;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        vector<pair<int, int>> tmp;
        tree.push_back(tmp);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> par;
        while (true) {
            cin >> chi;
            if (chi == -1) {
                break;
            }
            cin >> dist;

            tree[par].push_back(make_pair(chi, dist));
        }
    }
    bool visited[100001] = {false};
    visited[1] = true;
    dfs(1, visited, 0);
    memset(visited, false, sizeof(visited));
    visited[max_node] = true;
    dfs(max_node, visited, 0);

    cout << max_dist;

    return 0;
}