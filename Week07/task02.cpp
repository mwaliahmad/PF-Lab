#include <iostream>
using namespace std;
void printSeries(int number);
int main()
{
    int number;
    cout << "Enter Number: ";
    cin >> number;
    printSeries(number);
}
void printSeries(int number)
{
    int n1 = 0;
    int n2 = 1;
    int result;
    cout << n1 << " , " << n2;
    for (int count = 1; count <= (number - 2); count++)
    {
        result = n1 + n2;
        cout << " , " << result;
        n1 = n2;
        n2 = result;
    }
}
