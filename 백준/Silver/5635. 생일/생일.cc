#include <iostream>
#include <string.h>
using namespace std;

struct birth
{
	string name;
	int year;
	int month;
	int day;
};

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	birth maxPerson{ "",9999,99,99 }, minPerson{ "",0,0,0 };
	for (int i = 0; i < n; i++)
	{
		birth person;
		cin >> person.name >> person.day >> person.month >> person.year;
		// max
		if (person.year < maxPerson.year) {
			maxPerson = person;
		}
		else if (person.year == maxPerson.year) {
			if (person.month < maxPerson.month) {
				maxPerson = person;
			}
			else if (person.month == maxPerson.month) {
				if (person.day < maxPerson.day) {
					maxPerson = person;
				}
			}
		}

		// min
		if (person.year > minPerson.year) {
			minPerson = person;
		}
		else if (person.year == minPerson.year) {
			if (person.month > minPerson.month) {
				minPerson = person;
			}
			else if (person.month == minPerson.month) {
				if (person.day > minPerson.day) {
					minPerson = person;
				}
			}
		}
	}
	cout << minPerson.name << "\n" << maxPerson.name;
	return 0;
}