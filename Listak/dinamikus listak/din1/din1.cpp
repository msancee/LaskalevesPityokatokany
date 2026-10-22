#include <bits/stdc++.h>

using namespace std;

struct elem
{
    int szam;
    elem *kov;
}*elso;

void kiir()
{
    for(elem *p=elso; p!=NULL; p=p->kov)
        cout<<p->szam<<" ";
    cout<<endl;
}

int main(){
    elso=NULL;
    int n;
    elem *p, *utolso;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;

        p=new elem;
        p->szam=a;
        p->kov=NULL;

        if(elso==NULL)
            elso=p;
        else utolso->kov=p;
        utolso=p;
    }
    kiir();
    return 0;
}