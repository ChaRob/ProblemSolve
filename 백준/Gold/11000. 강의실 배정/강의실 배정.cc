#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

vector<pair<unsigned int, unsigned int>> classes = {};

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    unsigned int s, t;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        cin >> s >> t;
        classes.push_back({ s,t });
    }
    sort(classes.begin(), classes.end());
    priority_queue<int, vector<int>, greater<int>> course;
    course.push(classes[0].second);
    for (size_t i = 1; i < n; i++)
    {
        if (course.top() <= classes[i].first) {
            course.pop();
            course.push(classes[i].second);
        }
        else {
            course.push(classes[i].second);
        }
    }
    cout << course.size();
    return 0;
}