#include <iostream>
using namespace std;
void frequencyCheck(int number, int digit);
int main()
{
    int number, digit;
    cout << "Enter number: ";
    cin >> number;
    cout << "Enter digit: ";
    cin >> digit;
    frequencyCheck(number, digit);
}

void frequencyCheck(int number, int digit)
{
    int frequency = 0;
    while (number > 0)
    {
        int result = number % 10;
        number = number / 10;
        if (result == digit)
        {
            frequency++;
        }
    }
    cout << frequency;
}
