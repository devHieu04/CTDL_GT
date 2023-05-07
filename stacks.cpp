#include<iostream>
using namespace std ;
struct Node {
    int data ;
    
};
Node stack[100], p;
int top=-1;
void Push(Node stack[100], int &top , Node p)
{
    cout<<"enter data"<<endl;
    cin>>p.data;
    if(top==99)
    {
        cout <<"full "<< endl;
    }
    else{
        top++;
        stack[top]=p;
    }
}
void Pop(Node stack[100], int &top)
{
    if(top == -1)
    {
        cout <<"empty "<< endl;
    }
    else
    {
        p = stack[top];
        top--;
    }
    cout << p.data;
}
void nhap(Node stack [100], int &top){
   char c ;
   do {
     cout<<" Nhap data "<<endl;
     Push(stack , top, p);
     cout<<"Nhap them kh? y/n"<<endl;
     cin>>c;
   } while (c=='y'||c=='Y');
}
void xuat(Node stack [100], int &top)
{
    while(top!=-1)
    {
        Pop(stack , top);
        cout<<endl;
    }
}
int main ()
{
    nhap(stack,top);
    xuat(stack, top);
}