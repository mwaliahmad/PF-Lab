#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>

using namespace std;
void swap(int &num1, int &num2);
main()
{
    int number1 = 10;
    int number2 = 20;
    swap(number1, number2);
    cout << "Number 1: " << number1 << endl;
    cout << "Number 2: " << number2 << endl;
}
void swap(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
