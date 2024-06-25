#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

struct Info
{
	string num;
	bool repeat;
};

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string A;
	int P;
	cin >> A >> P;
	vector<Info> vec = { Info{A,false} };
	int check = 0;
	Info latest{"",false};
	while (true)
	{
		int sum = 0;
		latest = (check == 1)? latest : vec.back();
		for (int i = 0; i < latest.num.length(); i++)
		{
			sum += pow(latest.num[i] - '0', P);
		}
		
		string newNum;
		int i = 1;
		while (sum > 0)
		{
			char c = (sum % (int)pow(10, i)) + '0';
			newNum += c;
			sum /= 10;
		}
		reverse(newNum.begin(), newNum.end());
		check = 0;
		vector<Info>::iterator iter;
		for (iter = vec.begin(); iter != vec.end(); iter++)
		{
			if (iter->num == newNum) {
				if (iter->repeat == true) {
					check = 2;
				}
				else {
					iter->repeat = true;
					check = 1;
				}
				break;
			}
		}

		if (check == 2) {
			break;
		}
		else if (check == 1) {
			latest = *iter;
		}
		else {
			vec.push_back(Info{newNum,false});
		}
	}
	int cnt = 0;
	for (int i = 0; i < vec.size(); i++)
	{
		if (!vec[i].repeat) cnt++;
	}
	cout << cnt;
	return 0;
}