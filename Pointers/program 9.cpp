#include <iostream>
using namespace std;
int main() 
{
   int a = 10;
   int *pa = &a;

   char b = 'x';
   char *pb = &b;

   float c = 10.01;
   float *pc = &c;

   double d = 10.01;
   double *pd = &d;

   long e = 10.01;
   long *pe = &e;

   
   cout << "size of  integer a : = " << sizeof (a)<<endl;
   cout << "size of *pa : = " << sizeof (*pa)<<endl;

   cout << "size of  character b : = " << sizeof (b)<<endl;
   cout << "size of *pb : = " << sizeof (*pb)<<endl;

   cout << "size of float c : = " << sizeof (c)<<endl;
   cout << "size of *pc : = " << sizeof (*pc)<<endl;

   cout << "size of double d : = " << sizeof (d)<<endl;
   cout << "size of *pd : = " << sizeof (*pd)<<endl;

   cout << "size of long e : = " << sizeof (e)<<endl;
   cout << "size of *pe : = " << sizeof (*pe)<<endl;

   return 0;
}
