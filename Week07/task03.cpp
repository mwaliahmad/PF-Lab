#include <iostream>
using namespace std;
void totalDigit(int number);
int main()
{
    int number;
    cout << "Enter Number: ";
    cin >> number;
    totalDigit(number);
}
void totalDigit(int number)
{
    int digit = 0;
    while (number != 0)
    {
        digit++;
        number = number / 10;
    }
    cout << digit;
}