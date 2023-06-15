#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void dikstra(int x, int *time_list, vector<vector<pair<int, int>>> graph) {
    priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> que;
    que.push({ x,0 });
    time_list[x] = 0;
    while (!que.empty()) {
        pair<int, int> info = que.top();
        que.pop();
        if (time_list[info.first] < info.second) {
            continue;
        }
        for (int i = 0; i < graph[info.first].size(); i++)
        {
            int v = graph[info.first][i].first, d = graph[info.first][i].second;
            if (time_list[v] > time_list[info.first] + d) {
                time_list[v] = time_list[info.first] + d;
                que.push(make_pair(v,time_list[v]));
            }
        }
    }
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, m, x, start, end, time;
    cin >> n >> m >> x;
    vector<vector<pair<int, int>>> graph_forward;
    vector<vector<pair<int, int>>> graph_reverse;
    int* time_forward = new int[n + 1];
    int* time_reverse = new int[n + 1];

    for (int i = 0; i <= n; i++)
    {
        vector<pair<int, int>> tmp;
        graph_forward.push_back(tmp);
        graph_reverse.push_back(tmp);
        time_forward[i] = 100000000;
        time_reverse[i] = 100000000;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> start >> end >> time;
        graph_forward[start].push_back(make_pair(end, time));
        graph_reverse[end].push_back(make_pair(start, time));
    }

    dikstra(x, time_forward, graph_forward);
    dikstra(x, time_reverse, graph_reverse);

    int max_time = 0;
    for (int i = 1; i <= n; i++)
    {
        max_time = (max_time > time_forward[i] + time_reverse[i]) ? max_time : time_forward[i] + time_reverse[i];
    }

    cout << max_time;
    return 0;
}