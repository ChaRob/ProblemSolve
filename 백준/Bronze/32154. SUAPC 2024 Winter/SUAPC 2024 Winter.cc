#include <iostream>
#include <vector>
using namespace std;

vector<vector<char>> board = {
	{'A','B','C','D','E','F','G','H','J','L','M'},
	{'A','C','E','F','G','H','I','L','M'},
	{'A','C','E','F','G','H','I','L','M'},
	{'A','B','C','E','F','G','H','L','M'},
	{'A','C','E','F','G','H','L','M'},
	{'A','C','E','F','G','H','L','M'},
	{'A','C','E','F','G','H','L','M'},
	{'A','C','E','F','G','H','L','M'},
	{'A','C','E','F','G','H','L','M'},
	{'A','B','C','F','G','H','L','M'}
};

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<char> ans = board[n - 1];
	cout << ans.size() << "\n";
	for (char c : ans) {
		cout << c << " ";
	}
	return 0;
}