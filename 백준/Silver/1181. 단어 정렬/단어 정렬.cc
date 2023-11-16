#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

bool compare(const string& left, const string& right) {
    if (left.length() < right.length()) {
        return true;
    }
    else if (left.length() > right.length()) {
        return false;
    }

    return left < right;
}

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    string* words = new string[n];
    map<string, int> save_words;

    for (int i = 0; i < n; i++)
    {
        string tmp;
        cin >> tmp;
        save_words[tmp] = 1;
        words[i] = tmp;
    }
    sort(words, words+n, compare);

    for (int i = 0; i < n; i++)
    {
        if (save_words[words[i]] > 0) {
            cout << words[i] << "\n";
            save_words[words[i]]--;
        }
    }

    delete[] words;
    return 0;
}