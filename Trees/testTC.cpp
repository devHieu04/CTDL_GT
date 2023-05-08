#include <iostream>
#include <stdio.h>
using namespace std;
typedef char TData;
struct TNode
{
    TData data;
    TNode *left;
    TNode *right;
};
typedef TNode TTree;
TTree *p, *q, *T;
void CreateNode(char c)
{
    p = new TTree;
    p->data = c;
    p->left = NULL;
    p->right = NULL;
}
void PreOder(TTree *T)
{
    TTree *p;
    p = T;
    if (p != NULL)
    {
        cout << p->data << " ";
        PreOder(p->left);
        PreOder(p->right);
    }
}
void InOder(TTree *T)
{
    TTree *p;
    p = T;
    if (p != NULL)
    {
        InOder(p->left);
        cout << p->data << " ";
        InOder(p->right);
    }
}
void PosOder(TTree *T)
{
    TTree *p;
    p = T;
    if (p != NULL)
    {
        PosOder(p->left);
        PosOder(p->right);
        cout << p->data << " ";
    }
}
int main()
{
    T = NULL;
    CreateNode('a');
    T = p;
    CreateNode('b');
    T->left = p;
    q = p;
    CreateNode('d');
    q->left = p;
    CreateNode('e');
    q->right = p;
    CreateNode('c');
    T->right = p;
    q = p;
    CreateNode('f');
    q->right = p;
    q = p;
    CreateNode('g');
    q->left = p;
    CreateNode('h');
    q->right = p;
    q = p;
    PreOder(T);
    cout << endl;
    InOder(T);
    cout << endl;
    PosOder(T);
    return 0;
}