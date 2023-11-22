#include <iostream>
#include <unordered_map>
using namespace std;

int compare(const void* a, const void* b) {
    int left = *(int*)a, right = *(int*)b;
    if (left < right) return 1;
    else if (left > right) return -1;
    return 0;
}

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int score[8];
    int select[5];
    int sum = 0;
    unordered_map<int, int> scoreMap;
    for (int i = 0; i < 8; i++)
    {
        cin >> score[i];
        scoreMap[score[i]] = i + 1;
    }
    qsort(score, 8, sizeof(int), compare);
    for (int i = 0; i < 5; i++)
    {
        select[i] = scoreMap[score[i]];
        sum += score[i];
    }
    cout << sum << "\n";
    qsort(select, 5, sizeof(int), compare);
    for (int i = 4; i >= 0; i--)
    {
        cout << select[i] << " ";
    }
    return 0;
}