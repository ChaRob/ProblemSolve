#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    vector<string> bucket(min(s1.size(), s2.size()));
    
    auto it = set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), bucket.begin());
    bucket.resize(it - bucket.begin());
    return bucket.size();
}