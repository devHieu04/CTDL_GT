#include<iostream>
using namespace std;
struct SV {
    char ID[250];
    string name;
    float Dtoan;
    float dly;
    SV *next;
};
SV *head ;
void INP()
{
    SV *P , *C;
    char ch;
    do {
        P = new SV;
        cout<<"ID : "<<endl;
        cin>>P->ID;
        cin.ignore();
        cout<<"Name : "<<endl;
        getline(cin, P->name);
        cout<<"Dtoan : "<<endl;
        cin>>P->Dtoan;
        cout<<"Dly : "<<endl;
        cin>>P->dly;
        P->next = NULL;
        if(head == NULL)
        {
            head = P;
            C = P;
        }
        else
        {
            C->next = P;
            C = P;
        }
        cout <<" Nhap them sinh vien Y/N";
        cin>>ch;
    } while(ch=='Y'|| ch=='y');
}
void OutP()
{
    int dem = 0;
    SV* P =head ;
    cout<<"ID "<<"\t"<<"Name "<<"\t"<<"DToan: "<<"\t"<<"DLy"<<endl;
    while(P!=NULL)
    {
        cout<<P->ID<<"\t"<<P->name<<"\t"<<P->Dtoan<<"\t"<<P->dly<<endl;
        dem++;
        P = P->next;
    }
    cout<<"Number of Student : "<< dem;
}
int main()
{
    INP();
    //cout<<endl;
    OutP();
    return 0;
}