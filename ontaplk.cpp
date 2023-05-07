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
void InsertNode(Node *&L , int value , int pos)
{
    Node*P = new Node;
    P->val = value;
    P->next =NULL;
    if(L==NULL && pos!=0)
    {
        cout<<"don't do it"<<endl;
        return;
    }
    if (pos==0)
    {
        L = P;
        return;
    }
    Node *prev = L;
    for(int i = 0; i<pos-1;i++)
    {
        if(prev==NULL)
        {
            cout<<"Fucking shit man "<<endl;
            return ;
        }
        prev = prev->next;
    }
    P->next = prev->next;
    prev->next= P;
    
}
void DeleteNode(Node*&L , int pos)
{
    if(L==NULL)
    {
        return;
    }
    if(pos==0 )
    {
        Node *P= L;
        L = L->next;
        delete P;
        return;
    }
    Node *prev = L;
    for (int i = 0;i<pos-1;i++)
    {
        if(prev->next==NULL)
        {
            cout<<"Fucking shit man "<<endl;
            return ;
        }
        prev = prev->next;
    }
    Node * tmp = prev->next;
    prev->next = tmp->next;
    delete tmp;

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