#include <iostream>
using namespace std;
void showResult(int marks);
main()
{
  int marks;
  while(true)
  {
    cout << "Enter Your Marks: ";
    cin >> marks;
    showResult(marks);
  }
}  
  

void showResult(int marks)
{  
   if (marks > 50)
   {
     cout << "PASS" << endl;
   }
   if (marks == 50)
   {
     cout << "Keep Hard Working" << endl;
   }
   if (marks < 50)
   {
     cout << "FAIL" << endl;
   }
} 