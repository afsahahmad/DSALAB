#include<iostream>
using namespace std;
int main()
{
	int **p2;
	int *p1;
	int i=10;
	p1=&i;
	p2=&p1;
	cout<<"Accessing i via i :"<<i<<endl;
	cout<<"Accessing i via p1 :"<<*p1<<endl;
	cout<<"Accessing i via p2 :"<<**p2<<endl;
	return 0;
}
