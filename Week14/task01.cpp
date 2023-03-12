#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>

using namespace std;

main()
{
    int number = 10;
    int *pointer = &number;
    cout << "The Address of the variable is: " << pointer;
}