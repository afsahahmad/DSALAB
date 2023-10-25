#include<iostream>
using namespace std;
int main()
{
    int i;
    int *x=&i;
    for(*x=2; *x<=10; *x=*x+2)
    {
    	cout<<*x<<" ";
    }
    return 0;
}
