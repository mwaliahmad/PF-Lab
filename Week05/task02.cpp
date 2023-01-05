#include <iostream>
#include <cmath>
using namespace std;
float x1(float a, float b, float c);
float x2(float a, float b, float c);
main()
{
  float a, b ,c , r1, r2;
  
  cout << "Enter x2 coefficient: ";
  cin >> a;
  cout << "Enter x coefficient: ";
  cin >> b;
  cout << "Enter constant: ";
  cin >> c;
  r1 = x1 (a, b, c);
  r2 = x2 (a, b, c);
  cout <<"Values of x: " << r1 <<" or " << r2;
 
}
float x1(float a, float b, float c)
{
  
  float sq = sqrt(b*b - (4 * a * c)); 
  float x1 = (-b + sq) / (2 * a) ; 
  return x1;
}
float x2(float a, float b, float c)
{
  
  float sq = sqrt(b*b - (4 * a * c)); 
  float x2 = (-b - sq) / (2 * a) ; 
  return x2;
}