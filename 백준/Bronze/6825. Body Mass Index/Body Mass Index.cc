#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	float weight, height;
	cin >> weight >> height;
	float BMI = weight / (height * height);
	if (BMI < 18.5) cout << "Underweight";
	else if (18.5 <= BMI && BMI <= 25) cout << "Normal weight";
	else cout << "Overweight";
	return 0;
}