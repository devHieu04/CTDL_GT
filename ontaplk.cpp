#include <iostream>
using namespace std;
struct Node
{
    int val;
    Node *next;
};
Node *L;
void Input()
{
   char ch ;
    Node *P, *C;
   do{
    P = new Node;
    cout << "input int value " << endl;
    cin >> P->val;
    P->next = NULL;
    if (L == NULL)
    {
        L = P;
        C = P;
    }
    else
    {
        C->next = P;
        C = P;
    }
    cout<<"Nhap them Y/N"<<endl;
    cin>>ch;
   }
   while(ch=='Y'||ch=='y');
}
void Output()
{
    Node *P=L;
    while (P != NULL)
    {
        cout << P->val << "\t ";
        P = P->next;
    }
}
void AVG()
{
    Node *P=L;
    int dem = 0;
    int sum = 0;
    while (P != NULL)
    {
        sum = sum + P->val;
        dem++;
        P = P->next;
    }
    double avg = sum / dem;
    cout << avg << endl;
}
int main()
{
    Input();
    Output();
    AVG();
    return 0;
}