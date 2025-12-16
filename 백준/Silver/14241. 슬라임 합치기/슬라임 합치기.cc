#include <iostream>
#include <queue>
using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        int slime;
        cin >> slime;
        pq.push(slime);
    }
    int score = 0;
    while (pq.size() > 1)
    {
        int first = pq.top();
        pq.pop();
        int second = pq.top();
        pq.pop();
        score += first * second;
        pq.push(first + second);
    }
    cout << score;
    return 0;
}