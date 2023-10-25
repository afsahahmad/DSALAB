#include<iostream>
using namespace std;
int main()
{
	int l=44;
	int m=78;
	int *pl=&l;
	int *pm=&m;
	int n;
	int *pn=&n;
	*pn=*pl+*pm;
	cout<<"sum of two numbers is: "<<*pn<<endl;
	return 0;
}
