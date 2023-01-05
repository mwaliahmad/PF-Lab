#include <iostream>
using namespace std;
main()
{
  float v, flow1, flow2, hr, pipe1, pipe2, totalFlow;
  cout << "Enter Volume of the Pool: "; 
  cin >> v;
  cout << "Enter Flow Rate of the Pipe 1: "; 
  cin >> flow1;
  cout << "Enter Flow Rate of the Pipe 2: "; 
  cin >> flow2;
  cout << "Enter Worker Absent hours: "; 
  cin >> hr;
 
  pipe1 = flow1 * hr;
  pipe2 = flow2 * hr;
  totalFlow = pipe1 + pipe2;
  if(totalFlow < v)  
  {
    float fullpercent, pipe1percent, pipe2percent;
    fullpercent = (totalFlow / v) * 100;  
    pipe1percent = (pipe1 / totalFlow) * 100;
    pipe2percent = (pipe2 / totalFlow) * 100;
    cout << "The pool is " << fullpercent << " % full." << endl;
    cout << "Pipe 1: " << pipe1percent << "%. Pipe 2: " << pipe2percent << "%";
  }  
  
  if(totalFlow > v)  
  {
    int extra = totalFlow - v;
    cout << "For " << hr << " hours the pool overflows with " << extra << " liters." ;  

  }
 
}