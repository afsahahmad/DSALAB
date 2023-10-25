#include<iostream>
using namespace std;
int main()
{
	int a=20;
	int b=10;
	int *pa=&a;
	int *pb=&b;
	cout<<"Before swap:  "<<"a="<<*pa<<"   "<<"b="<<*pb<<endl;
	*pa=*pa+*pb;
	*pb=*pa-*pb;
	*pa=*pa-*pb;
	cout<<"After swap:  "<<"a="<<*pa<<"   "<<"b="<<*pb<<endl;
	return 0;
}

