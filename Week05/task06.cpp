#include <iostream>
using namespace std;
string outputa(int userInput);
string outputb(int userInput);
main()
{
  while(true) 
  {  
    int userInput;
    cout << "Enter Your Number(in two digit): ";
    cin >> userInput;
    string resulta = outputa(userInput);
    string resultb = outputb(userInput);
    cout << resulta << " " << resultb << endl;
  }
}

string outputa(int userInput)
{
  int a ;
  a = userInput / 10; 
  if(a == 0)
  {
  return "";
  } 
  if(a == 10)
  {
    return "Ten";
  }
  if(a == 2)
  {
    return "Twenty";
  } 
  if(a == 3)
  {
    return "Thirty";
  }
  if(a == 4)
  {
    return "Forty";
  }
  if(a == 5)
  {
    return "Fifty";
  }
  if(a == 6)
  {
    return "Sixty";
  }
  if(a == 7)
  {
    return "Seventy";
  }
  if(a == 8)
  {
    return "Eighty";
  }
  if(a == 9)
  {
    return "Ninty";
  }
  
  return 0;
}

string outputb(int userInput)
{
  int b = userInput % 10;

  if(b == 1)
  {
    return "One";
  } 
  if(b == 2)
  {
    return "Two";
  } 
  if(b == 3)
  {
    return "Three";
  } 
  if(b == 4)
  {
    return "Four";
  } 
  if(b == 5)
  {
    return "Five";
  } 
  if(b == 6)
  {
    return "Six";
  } 
  if(b == 7)
  {
    return "Seven";
  } 
  if(b == 8)
  {
    return "Eight";
  } 
  if(b == 9)
  {
    return "Nine";
  }
  return 0;
}
  

