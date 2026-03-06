#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Miniature
{
	int quality;
	int price;
};

bool Sort1(const Miniature& a, const Miniature& b)
{
	if (a.quality == b.quality)
		return a.price < b.price;
	return a.quality > b.quality;
}

bool Sort2(const Miniature& a, const Miniature& b)
{
	if (a.price == b.price)
		return a.quality > b.quality;
	return a.price < b.price;
}

void PrintVec(const Miniature& mini)
{
	cout << mini.quality << " " << mini.price << " ";
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<Miniature> vec(n);
	for (int i = 0; i < n; i++)
	{
		Miniature mini = {};
		cin >> mini.quality >> mini.price;
		vec[i] = mini;
	}
	sort(vec.begin(), vec.end(), Sort1);
	PrintVec(vec[0]); PrintVec(vec[1]);
	cout << "\n";
	sort(vec.begin(), vec.end(), Sort2);
	PrintVec(vec[0]); PrintVec(vec[1]);
	return 0;
}