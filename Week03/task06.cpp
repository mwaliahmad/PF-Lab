#include <iostream>
using namespace std;
main(){

string name;
float matric;
float matricpercent;
float matricagg;
float inter;
float interpercent;
float interagg;
float ecat;
float ecatpercent;
float ecatagg;
float aggregate;

cout << "Enter Name: ";
cin >> name;

cout << "Enter Matric Marks: ";
cin >> matric;
cout << "Enter Inter Marks: ";
cin >> inter;  
cout << "Enter ECAT Marks: ";
cin >> ecat;

matricpercent = matric/1100* 100;
interpercent = inter/1100 * 100;
ecatpercent = ecat/400 * 100;

matricagg = matricpercent * 10/100;
interagg = interpercent * 40/100;
ecatagg = ecatpercent * 50/100;

aggregate = matricagg + interagg + ecatagg;

cout << "Your Aggregate: " << aggregate;










}