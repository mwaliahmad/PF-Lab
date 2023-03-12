#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>

using namespace std;
int matrix[4][3] = {{0, 0, 0},
                    {1, 2, 3},
                    {1, 2, 3},
                    {1, 2, 7}};
int count();
main()
{
    cout << count();
}

int count()
{
    int count = 0;
    for (int row = 0; row < 4; row++)
    {
        for (int row2 = row + 1; row2 < 4; row2++)
        {
            if ((matrix[row][0] == matrix[row2][0]) && (matrix[row][1] == matrix[row2][1]) && (matrix[row][2] == matrix[row2][2]))
            {
                count++;
                break;
            }
        }
    }
    return count;
}
