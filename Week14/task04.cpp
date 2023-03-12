#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>

using namespace std;
float avg(int arr[], int size);
main()
{
    int setSize = 5;
    int set[setSize] = {1, 2, 3, 4, 5};
    float result = avg(set, setSize);
    cout << result << endl;
}

float avg(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    float avg = sum / size;
    return avg;
}
