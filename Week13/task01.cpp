#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>

using namespace std;
int matrix[4][4] = {{1, 0, 0, 0},
                    {0, 1, 0, 0},
                    {0, 0, 1, 0},
                    {0, 0, 0, 1}};
bool identity();
main()
{
    cout << identity();
}

bool identity()
{
    bool flag = true;
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (row == col && matrix[row][col] != 1)
            {
                flag = false;
            }
            else if (row != col && matrix[row][col] != 0)
            {
                flag = false;
            }
        }
    }
    return flag;
}
