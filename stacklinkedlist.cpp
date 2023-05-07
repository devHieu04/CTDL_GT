#include <iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
};
Node *head =NULL; 
 void Push(int value )
 {
    Node * P = new Node;
    P->data = value;
    P->next = head;
    head = P;
 }
int  Pop()
 {
    if(head != NULL)
    {
       int value = head->data;
       Node *P = head;
       head = head->next;
       delete P;
       return value;
    }
    else
    {
        cout << "Stack is Empty" << endl;
        return 0;
    }
 }
 int main ()
 {
    int n ;
    cout<<"Nhap so chuyen 2 :"<< endl;
    cin>>n;
    while(n!=0)
    {
        int sd = n%2;
        Push(sd);
        n=n/2;
    };
    while(head!=NULL)
    {
        int vl = Pop();
        cout<<vl;
    };
 }