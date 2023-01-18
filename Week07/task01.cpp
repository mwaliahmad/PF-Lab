#include <iostream>
using namespace std;
void printTable(int number);
int main()
{
    int number;
    cout << "Enter Number: ";
    cin >> number;
    printTable(number);
}
void printTable(int number)
{
    for (int count = 1; count <= 10; count++)
    {
        cout << number << " * " << count << " = " << (count * number) << endl;
    }
}