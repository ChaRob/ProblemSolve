#include <iostream>
#include <unordered_map>
#include <iomanip>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	unordered_map<string, float> gradeGrid = { make_pair("A+",4.3), make_pair("A0",4.0),
		make_pair("A-",3.7), make_pair("B+",3.3), make_pair("B0",3.0), make_pair("B-",2.7),
		make_pair("C+",2.3), make_pair("C0",2.0), make_pair("C-",1.7), make_pair("D+",1.3),
		make_pair("D0",1.0), make_pair("D-",0.7), make_pair("F",0.0) };
	int n;
	cin >> n;
	float creditSum = 0, gradeSum = 0;
	for (int i = 0; i < n; i++)
	{
		string lecture, grade;
		float credit;
		cin >> lecture >> credit >> grade;
		creditSum += credit;
		gradeSum += credit * gradeGrid[grade];
	}
	cout << fixed << setprecision(2) << gradeSum / creditSum;
	return 0;
}