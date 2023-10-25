#include <iostream>
using namespace std;
int main() 
{  
   	char str[20], *pt;
   	cout << "Enter Any string (below 20 words) : ";
   	cin>>str;
    pt = str;

   	while (*pt != '\0') 
	   {
    		cout << *pt;
      		pt++;
   	}
	return 0;
}
