#include <iostream>
#include <vector>
#include <string>
using namespace std;

void PrintClampToEdge(const vector<vector<char>>& _texture, int n, int m)
{
	int u = _texture.size();
	int v = _texture[0].size();

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i >= u && j >= v)
				cout << _texture[u - 1][v - 1];
			else if (i >= u)
				cout << _texture[u - 1][j];
			else if (j >= v)
				cout << _texture[i][v - 1];
			else
				cout << _texture[i][j];
		}
		cout << "\n";
	}
}

void PrintRepeat(const vector<vector<char>>& _texture, int n, int m)
{
	int u = _texture.size();
	int v = _texture[0].size();

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << _texture[i % u][j % v];
		}
		cout << "\n";
	}
}

void PrintMirrorRepeat(const vector<vector<char>>& _texture, int n, int m)
{
	int u = _texture.size();
	int v = _texture[0].size();

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int uc = i / u;
			int vc = j / v;
			int x = (uc % 2 == 0) ? i % u : (u - 1) - i % u;
			int y = (vc % 2 == 0) ? j % v : (v - 1) - j % v;
			cout << _texture[x][y];
		}
		cout << "\n";
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m, u, v;
	cin >> n >> m >> u >> v;
	vector<vector<char>> texture(u);
	for (int i = 0; i < u; i++)
	{
		vector<char> textureRow(v);
		for (int j = 0; j < v; j++)
		{
			cin >> textureRow[j];
		}
		texture[i] = textureRow;
	}
	string outputLogic;
	cin >> outputLogic;
	if (outputLogic == "clamp-to-edge")
	{
		PrintClampToEdge(texture, n, m);
	}
	else if (outputLogic == "repeat")
	{
		PrintRepeat(texture, n, m);
	}
	else if (outputLogic == "mirrored-repeat")
	{
		PrintMirrorRepeat(texture, n, m);
	}
	return 0;
}