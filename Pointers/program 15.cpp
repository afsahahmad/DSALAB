#include <iostream>
using namespace std;
int main() 
{
   	char str[20], *pt;
   	int i = 0;
   	cout << "Enter Any string : ";
   	cin>>str;
   	pt = str;
   	
   	while (*pt != '\0') 
	{
	   	i++;
      	pt++;
   	}
   	cout << "\nLength of String : " << i;
   	return 0;
}
