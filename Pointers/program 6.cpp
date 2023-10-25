#include <iostream>
using namespace std;
int main()
{
    int i,n,c,*x,*nm,*fc;
    x=&i;
    nm=&n;
    fc=&c;
    *fc=0;
    cout<<"Enter a number ";
    cin>>*nm;

    for(*x=1; *x<=*nm; *x=*x+1)
    {
        if(*nm % *x==0)
        {
            *fc=*fc+1;	
        }
    }

    if(*fc==2)
    {
        cout<<"Prime Number";
    }
    else
    {
        cout<<"Not Prime Number";
    }
    return 0;
}
