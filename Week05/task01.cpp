#include <iostream>
#include <cmath>
using namespace std;
float height(float base, float degree);
main()
{
  float degree, base, result;
  cout << "Enter Base Lenght: " ;
  cin >> base;
  cout << "Enter Angle of elevation: ";
  cin >> degree;
  result = height(base, degree); 
  cout << "Height is: " << result;

}

float height(float base, float degree)
{
  float radian, height;
  radian = degree / 57.2958;
  height = tan(radian) * base;
  return height;
}