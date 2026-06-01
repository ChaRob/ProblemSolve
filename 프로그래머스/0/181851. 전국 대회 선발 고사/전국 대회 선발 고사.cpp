#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Student
{
    int Rank;
    int Position;
};

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    vector<Student> student;
    for (int i = 0; i < attendance.size(); i++)
    {
        if (attendance[i] == true)
        {
            student.push_back({ rank[i], i });
        }
    }
    sort(student.begin(), student.end(), [](const Student& a, const Student& b) {
        return a.Rank < b.Rank;
    });
    answer = student[0].Position * 10000 + student[1].Position * 100 + student[2].Position;
    return answer;
}