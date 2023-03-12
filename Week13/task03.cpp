#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>

using namespace std;

char board[7][7] = {{'#', ' ', ' ', ' ', ' ', ' ', '#'},
                    {'#', ' ', ' ', ' ', ' ', ' ', '#'},
                    {'#', ' ', ' ', ' ', ' ', ' ', '#'},
                    {'#', '#', '#', '#', '#', '#', '#'},
                    {' ', ' ', ' ', '#', ' ', ' ', ' '},
                    {' ', ' ', ' ', '#', ' ', ' ', ' '},
                    {' ', ' ', ' ', '#', ' ', ' ', ' '}};
bool goal();
main()
{
    cout << goal();
}

bool goal()
{
    bool flag = false;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            if (board[i][j] == 'O')
            {
                flag = true;
                break;
            }
        }
    }
    return flag;
}
