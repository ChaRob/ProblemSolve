#include<iostream>
#include<vector>
using namespace std;

int max_dist;
vector<vector<pair<int, int>>> tree;

void dfs(int start, bool *visited, long long now_dist) {
    for (int j = 0; j < tree[start].size(); j++)
    {
        if (!visited[tree[start][j].first]) {
            visited[tree[start][j].first] = true;
            max_dist = (max_dist > now_dist + tree[start][j].second) ? max_dist : now_dist + tree[start][j].second;
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
        cin >> par >> chi >> dist;
        tree[par].push_back(make_pair(chi, dist));
        tree[chi].push_back(make_pair(par, dist));
    }
    for (int i = 1; i <= n; i++)
    {
        bool visited[10001] = {false};
        visited[i] = true;
        dfs(i, visited, 0);
    }

    cout << max_dist;

    return 0;
}