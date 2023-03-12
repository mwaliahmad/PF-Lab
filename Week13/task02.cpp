#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>

using namespace std;

char board[5][5] = {{'.', '.', '.', '*', '*'},
                    {'.', '*', '.', '.', '.'},
                    {'.', '*', '.', '.', '.'},
                    {'.', '*', '.', '.', '.'},
                    {'.', '.', '*', '*', '.'}};

string fire(string input);
main()
{
    string input;
    cout << "Enter Your Fire Coordinates(e.g A4): ";
    cin >> input;
    cout << endl;
    cout << fire(input);
}

string fire(string input)
{
    char row = input[0];
    char col = input[1];
    int Indexrow;
    if (row == 'A')
    {
        Indexrow = 0;
    }
    else if (row == 'B')
    {
        Indexrow = 1;
    }
    else if (row == 'C')
    {
        Indexrow = 2;
    }
    else if (row == 'D')
    {
        Indexrow = 3;
    }
    else if (row == 'E')
    {
        Indexrow = 4;
    }
    int Indexcol = int(col - '0');

    string result;
    if (board[Indexrow][Indexcol] == '.')
    {
        result = "Splash";
    }
    else if (board[Indexrow][Indexcol] == '*')
    {
        result = "BOMB";
    }
    return result;
}
