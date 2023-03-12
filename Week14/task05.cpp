#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>

using namespace std;
bool sparse(int arr[][3], int size);
main()
{
    int matrixSize = 3;
    int matrix[matrixSize][3] = {{1, 0, 3},
                                 {0, 5, 3},
                                 {0, 2, 0}};

    cout << sparse(matrix, matrixSize);
}

bool sparse(int arr[][3], int size)
{
    float count = 0;
    bool flag;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == 0)
            {
                count++;
            }
        }
    }
    float check = (size * size) / 2;
    if (count > check)
    {
        flag = true;
    }
    else
    {
        flag = false;
    }
    return flag;
}
