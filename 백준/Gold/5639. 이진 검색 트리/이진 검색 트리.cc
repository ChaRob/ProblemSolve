#include <iostream>
using namespace std;

struct Node {
    Node* left = nullptr;
    Node* right = nullptr;
    int val = 0;
};

void preorder(int num, Node *node) {
    if (node->val == 0) {
        node->val = num;
        return;
    }
    if (node->val > num) {
        if (node->left == nullptr) {
            node->left = new Node();
        }
        preorder(num, node->left);
    }
    else {
        if (node->right == nullptr) {
            node->right = new Node();
        }
        preorder(num, node->right);
    }
}

void postorder(Node* node) {
    if (node->left) {
        postorder(node->left);
    }
    if (node->right) {
        postorder(node->right);
    }
    cout << node->val << "\n";
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n = 0;
    Node* tree = new Node();
    while (cin >> n) {
        preorder(n, tree);
    }
    postorder(tree);

    return 0;
}