#include <iostream>
using namespace std;
int main()
{   
   	int* pt;
  	int var;

   	var = 1;
   	cout << "Address of var :" << &var << "\n";
   	cout << "Value   of var :"<< var << "\n\n";
   	
   	pt = &var;
   	cout << "Address of Pointer pt :" << pt << "\n";
   	cout << "Content of Pointer pt :" << *pt << "\n\n";

   	var = 2;
   	cout << "Address of Pointer pt :" << pt << "\n";
   	cout << "Content of Pointer pt :" << *pt << "\n\n";

	*pt = 3;
   	cout << "Address of var	:" << &var << "\n";
   	cout << "Value   of var	:" << var << "\n\n";

   	return 0;
}
