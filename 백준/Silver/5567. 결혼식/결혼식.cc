#include<iostream>
#include<vector>
using namespace std;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, m, a, b, i;
    cin >> n >> m;
    vector<vector<int>> friends;
    int* visited = new int[n+1] {0};
    for (i = 0; i <= n; i++) {
        friends.push_back(vector<int> {});
    }
    for (i = 1; i <= m; i++) {
        cin >> a >> b;
        friends[a].push_back(b);
        friends[b].push_back(a);
    }
    int person = 0, x;
    vector<int> stack_arr = {};
    stack_arr.push_back(1);
    visited[1] = 1;
    while (!stack_arr.empty()) {
        x = stack_arr.back();
        stack_arr.pop_back();
        for (i = 0; i < friends[x].size(); i++) {
            if (visited[x]+1 <= 3 && visited[friends[x][i]] == 0) {
                visited[friends[x][i]] = visited[x] + 1;
                stack_arr.push_back(friends[x][i]);
                person++;
            }
        }
    }
    cout << person;
    delete[] visited;
    return 0;
}