#include <iostream>
using namespace std;
main(){
double mb;
double kb;
double byte;
double bits;

cout << "Write your bits: ";
cin >> bits;

byte = bits/8;
cout << bits << " bits is equal to  " << byte <<" bytes" <<endl;

kb = byte/1024;
cout << bits << " bits is equal to  " << kb <<" KBs" <<endl;

mb = kb/1024;
cout << bits << " bits is equal to  " << mb <<" MBs"; 






}