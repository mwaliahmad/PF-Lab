#include <iostream>
using namespace std;
int digitSum(int number);
int main()
{
    int number;
    cout << "Enter Number: ";
    cin >> number;
    int result = digitSum(number);
    cout << result;
}

int digitSum(int number)
{
    int digit;
    int sum = 0;
    while (digit != 0)
    {
        digit = number % 10;
        number = number / 10;
        sum = sum + digit;
    }

    return sum;
}
