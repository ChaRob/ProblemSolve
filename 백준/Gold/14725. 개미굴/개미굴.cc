#include <iostream>
#include <string>
#include <set>
using namespace std;

class Node
{
private:
    struct PtrStringCompare
    {
        bool operator()(const Node* a, const Node* b) const
        {
            return a->data < b->data;
        }
    };
public:
    string data;
    int depth;
    set<Node*, PtrStringCompare> next;
    Node(string _val = "", int _depth = -1)
    {
        data = _val;
        depth = _depth;
    }
    ~Node()
    {
        for (Node* n : next)
        {
            delete n;
        }
    }
};

void PrintNode(Node* nowNode)
{
    for (int i = 0; i < nowNode->depth; i++)
    {
        cout << "--";
    }
    if (nowNode->data != "")
        cout << nowNode->data << "\n";
    for (Node* nextNode : nowNode->next)
    {
        PrintNode(nextNode);
    }
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    Node* head = new Node();
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        Node* nowNode = head;
        for (int j = 0; j < k; j++)
        {
            string peed;
            cin >> peed;
            bool isNewNode = true;
            for (Node* n : nowNode->next)
            {
                if (n->data == peed)
                {
                    nowNode = n;
                    isNewNode = false;
                    break;
                }
            }
            if (isNewNode)
            {
                Node* newNode = new Node(peed, nowNode->depth + 1);
                nowNode->next.insert(newNode);
                nowNode = newNode;
            }
        }
    }
    PrintNode(head);
    delete head;
    return 0;
}
