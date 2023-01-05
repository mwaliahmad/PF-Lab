#include <iostream>
#include <cmath>
using namespace std;

main()
{
  float num1, num2, num3;
  cout << "Enter Number 1: ";
  cin >> num1;
  cout << "Enter Number 2: ";
  cin >> num2;
  cout << "Enter Number 3: ";
  cin >> num3;

  float greater = max(num1 , num2);
  cout << greater << " is the greater number."<< endl;

  float smaller = min(num1, num2);
  cout << smaller << " is the smaller number."<< endl;

  float sq = sqrt(num1);
  cout << sq << " is the Square root." << endl; 

  float power = pow(num1, num2);
  cout << power <<"Power"<<endl;

  float cuberoot = cbrt(num1);
  cout << cuberoot <<"CubeRoot"<< endl;

  float next = ceil(num3);
  cout << next << "CEIL" << endl;  
 
  float prev = floor(num3); 
  cout << prev << "FLOOR" << endl;  
  
}