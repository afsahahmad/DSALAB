#include <iostream>
using namespace std;
int main()
{
   	int *p1, *p2;
   	int num1, num2, diff;
   	cout << "\nEnter Two Numbers for Find a Difference : \n";
   	cin>>num1;
   	cin>>num2;

   	p1 = &num1;
   	p2 = &num2;
   	diff = *p1 - *p2;
   	cout << "Difference :" << diff;
   	return 0;
}
