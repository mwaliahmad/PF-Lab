#include <iostream>
using namespace std;
main()
{
  int hr, mint;
  cout << "Enter Hours: ";
  cin >> hr;
  cout << "Enter Minutes: ";
  cin >> mint;
  cout << endl;
  if(hr < 23)
  {
    if(mint < 45)
    {
      cout << hr << " : " << mint + 15 ;
    }
    if(mint >= 45)
    {
      cout << hr + 1 << " : " << -1 * (60 - (mint + 15))  ;
    }
  }
  if(hr >= 23)
  {
    if(mint < 45)
    {
      cout << -1 * (24 - (hr + 1)) << " : " << mint + 15 ;
    }
    if(mint >= 45)
    {
      cout << -1 * (24 - (hr + 1)) << " : " << -1 * (60 - (mint + 15))  ;
    }
  }  
  
  
}
