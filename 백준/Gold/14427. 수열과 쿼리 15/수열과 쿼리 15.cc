#include <iostream>
#include <math.h>
using namespace std;

typedef long long ll;

struct info
{
    ll data = 1000000001;
    int index = 100000;
};

info update_tree(info* tree, int node, int start, int end, int target, int value) {
    if (target < start || end < target) {
        return tree[node];
    }
    if (start == end) {
        tree[node].data = value;
        return tree[node];
    }
    int mid = (start + end) / 2;
    info left = update_tree(tree, node * 2, start, mid, target, value);
    info right = update_tree(tree, node * 2 + 1, mid + 1, end, target, value);

    if (left.data <= right.data) {
        return tree[node] = left;
    }
    return tree[node] = right;
}

info init_tree(info* tree, ll* A, int node, int start, int end) {
    if (start == end) {
        tree[node].data = A[start];
        tree[node].index = start;
        return tree[node];
    }
    int mid = (start + end) / 2;
    info left = init_tree(tree, A, node * 2, start, mid);
    info right = init_tree(tree, A, node * 2 + 1, mid + 1, end);
    if (left.data <= right.data) {
        return tree[node] = left;
    }
    return tree[node] = right;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, m, query, x, y;
    cin >> n;
    ll* A = new ll[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }
    int h = ceil(log2(n));
    int tree_size = 1 << (h + 1);
    info* tree = new info[tree_size + 1];
    init_tree(tree, A, 1, 1, n);

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> query;
        if (query == 1) {
            cin >> x >> y;
            update_tree(tree, 1, 1, n, x, y);
        }
        else {
            cout << tree[1].index << "\n";
        }
    }

    delete[] A, tree;
    return 0;
}