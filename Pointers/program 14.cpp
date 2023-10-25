#include <iostream>
using namespace std;
int main()
{
   	char str[20], *pt;
   	int i = 0, c = 0;
   	cout << "Enter Any string (small letters)  : ";
   	cin>>str;
	pt = str;
	
   	while (*pt != '\0') 
   {
      if (*pt == 'a' || *pt == 'e' || *pt == 'i' || *pt == 'o' || *pt == 'u')
         c++;
      i++;
      pt++;
   }
   cout << "\nLength of String : " << i;
   cout << "\nVowels Count In the String : " << c;
   cout << "\nConstant Count in the String : " << (i - c);
   return 0;
}
