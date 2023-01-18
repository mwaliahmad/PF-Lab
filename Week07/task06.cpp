#include <iostream>
using namespace std;
int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2, int GCD);
int main()
{
    int number1, number2;

    cout << "Enter Number 1: ";
    cin >> number1;
    cout << "Enter Number 2: ";
    cin >> number2;

    int GCD = calculateGCD(number1, number2);

    int result = calculateLCM(number1, number2, GCD);
    cout << "LCM is: " << result;
}

int calculateGCD(int number1, int number2)
{
    int gcd;

    for (int x = 1; x <= number1; x++)
    {
        if (number1 % x == 0 && number2 % x == 0)
        {
            gcd = x;
        }
    }

    return gcd;
}

int calculateLCM(int number1, int number2, int GCD)
{
    int lcm = (number1 * number2) / GCD;

    return lcm;
}
