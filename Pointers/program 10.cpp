#include <iostream>
using namespace std;
#define MAX_SIZE 5
int main() 
{   
    int var[] = {10, 20, 30, 40, 50};
    int i = 0;

    int *pt;
    pt = &var[0];

    while (i < MAX_SIZE) 
    {
      cout << "Position : " << i << " # Actual Value : " << var[i] << " , Address = " << &var[i] << " \n";
      cout << "Position : " << i << " # Pointer Value : " << *pt << " , Address = " << pt << " \n\n";
      i++;
      pt++;
    }

    return 0;
}
