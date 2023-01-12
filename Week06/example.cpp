#include <iostream>
using namespace std;
int isGreatest(int num1, int num2, int num3);
main()
{
    int num1;
    int num2;
    int num3;
    int isgreater;
    cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;
    cout << "Number 3: ";
    cin >> num3;
    isgreater = isGreatest(num1, num2, num3);
    cout << isgreater << " is greatest";
}
int isGreatest(int num1, int num2, int num3)
{
    int greater;
    if ((num1 > num2) && num1 > num3)
    {
        greater = num1;
    }
    else if ((num2 > num3) && num2 > num1)
    {
        greater = num2;
    }
    else if ((num3 > num1) && num3 > num2)
    {
        greater = num3;
    }
    else
    {
        greater = num1;
    }
    return greater;
}
