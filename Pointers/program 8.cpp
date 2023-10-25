#include <iostream>
using namespace std;

void area_of_circle(float *value, float *result)
{
	*result = 3.14 * (*value) * (*value);
}

int main() 
{
	float radius, area;
	cout << "Enter the radius of Circle : "<<endl;
	cin>>radius;
	
	area_of_circle(&radius, &area);
	cout << "Area of Circle : " << area<<endl;
	return 0;
}
