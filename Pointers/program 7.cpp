#include <iostream>
#include<conio.h>
using namespace std;
int main() 
{
   int a=10;
   int *pt=&a;
   
   (*pt)++;
   cout<< "Post Increment = " <<a<<endl;

   ++(*pt); 
   cout<< "Pre Increment = " <<a<<endl;


   (*pt)--;
   cout<< "Post Decrement = " <<a<<endl;

   --(*pt);
   cout<< "Pre Decrement = " <<a<<endl;

   return 0;
}
