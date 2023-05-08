#include<iostream>
using namespace std;
struct Node{
    int val ;
    Node *next ;
};
Node *L=NULL;
 void Add()
 {
    char ch;
    Node *P, *C;
    do {
        P = new Node ;
        cout<<"Nhap value : ";
        cin>>P->val;
        P->next = NULL;
        if(L==NULL)
        {
            L =P;
            C=P;
        }
        else
        {
            C->next = P;
            C= P;
        }
        cout<<"add next ? Y/N"<<endl;
        cin>>ch;
        
    }while (ch=='Y'||ch=='y');
 }
 void Insertpos(Node*&L , int value , int pos)
 {
    Node*P = new Node;
    P->val = value;
    P->next = NULL;
    if(L==NULL&&pos!=0)
    {
       return ;
    }
     if(pos==0)
     {
        L=P;
        return ;
     }

     Node * prev = L;
     for(int i = 0 ; i<pos-1;i++)
     {
        if(prev==NULL)
        {
            cout<<"don't do it";
            return ;
        }
        prev = prev->next;
     }
     P->next=prev->next;
     prev -> next = P;
 }
 void DeleteNode(Node*&L, int pos)
 {
    
    if(pos==0)
    {
        Node*P = new Node;
        P=L;
        L=L->next;
        delete P;
    }
    if(L==NULL)
    {
        return ;
    }
    Node*prev = L;
    for(int i= 0 ; i<pos-1;i++)
    {
        if(prev->next ==NULL)
        {
            cout<<"don't do it";
            return ;
        }
        prev=prev->next;
    }
    Node *tmp= prev->next;
    prev->next = tmp->next;
   delete tmp;
 }
 void DeleteNodeVal (int val)
 {
    Node *P=NULL , *C=P;
    while (C!=NULL)
    {
        if(C->val==val)
        {
            if(P==NULL)
            {
                L=C->next;
            }
            else
            {
                P->next=C->next;
            }
            delete C;
        }
        P=C;
        C=C->next;
    }
   
 }

 void Out()
 {
    Node*P=L;
    while (P!=NULL)
    {
        cout<<P->val<<"->";
        cout<<endl;
        P=P->next;
    }
 }
 int main ()
 {
    Add();
    Out();
    cout<<"---------------;----------"<<endl;
    Insertpos(L,10,3);
    Out();
    cout<<"==========================="<<endl;
    DeleteNode(L,2);
    Out();
    cout<<"==========================="<<endl;
    DeleteNodeVal(10);
    Out();
    return 0;
 }
