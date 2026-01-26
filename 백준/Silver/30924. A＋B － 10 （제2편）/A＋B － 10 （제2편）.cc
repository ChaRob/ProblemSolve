#include <iostream>
#include <random>
#include <vector>
#include <algorithm>
using namespace std;

class UniqueRandomGenerator
{
public:
	UniqueRandomGenerator(int _min, int _max)
	{
		for (int i = _min; i <= _max; ++i)
		{
			m_values.push_back(i);
		}
		std::random_device rd;
		m_engine.seed(rd());
		std::shuffle(m_values.begin(), m_values.end(), m_engine);
	}

	int GetNext()
	{
		return m_values[m_index++];
	}

private:
	std::vector<int> m_values;
	std::mt19937 m_engine;
	size_t m_index = 0;
};

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int result, a = 0, b = 0;
	UniqueRandomGenerator generator_A(1, 10000), generator_B(1, 10000);
	for (int i = 1; i <= 10000; i++)
	{
		int ask = generator_A.GetNext();
		cout << "? A " << ask << endl;
		cin >> result;
		if (result == 1)
		{
			a = ask;
			break;
		}
	}
	for (int i = 1; i <= 10000; i++)
	{
		int ask = generator_B.GetNext();
		cout << "? B " << ask << endl;
		cin >> result;
		if (result == 1)
		{
			b = ask;
			break;
		}
	}
	cout << "! " << a + b;
	return 0;
}