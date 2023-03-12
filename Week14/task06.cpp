#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>

using namespace std;
void merge(int arr1[], int arr2[], int arr3[], int size);
main()
{
    int size = 3;
    int set1[size] = {1, 2, 3};
    int set2[size] = {1, 2, 3};
    int final[size + size];
    merge(set1, set2, final, size);
    for (int i = 0; i < 6; i++)
    {
        cout << final[i] << " ";
    }
}

void merge(int arr1[], int arr2[], int arr3[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < size; i++)
    {
        arr3[i + size] = arr2[i];
    }
}
