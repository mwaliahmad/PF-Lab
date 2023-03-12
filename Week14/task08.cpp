#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>

using namespace std;
void storefile(char arr[][6], int size);
void loadfile(char arr[][6], int size);
void printSeat(char arr[][6], int size);
int Convertcolumn(char input);
main()
{
    char seat[13][6];
    loadfile(seat, 13);
    printSeat(seat, 13);
    // storefile(seat, 13);
    int seatRow;
    cout << "Enter Your Desirable Seat Row (1-13) : ";
    cin >> seatRow;

    char column;
    cout << "Enter Your Desirable Seat Column (A-F): ";
    cin >> column;
    int seatCol = Convertcolumn(column);
}

void storefile(char arr[][6], int size)
{
    fstream file;
    file.open("Data.txt", ios::app);
    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < 6; j++)
        {
            file << arr[i][j] << ",";
        }
        cout << endl;
    }
    file.close();
}

void loadfile(char arr[][6], int size)
{
    fstream file;
    file.open("Data.txt", ios::in);
    string line;
    int row = 0;
    while (getline(file, line))
    {
        for (int i = 0; i < line.length(); i++)
        {
            arr[row][i] = line[i];
        }
        row++;
    }
    file.close();
}

void printSeat(char arr[][6], int size)
{
    cout << "\tA\tB\tC\tD\tE\tF" << endl;
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Row " << i + 1 << "\t";
        for (int j = 0; j < 6; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int Convertcolumn(char input)
{
    int output;
    if (input == 'A')
    {
        output = 1;
    }
    else if (input == 'B')
    {
        output = 2;
    }
    else if (input == 'C')
    {
        output = 3;
    }
    else if (input == 'D')
    {
        output = 4;
    }
    else if (input == 'E')
    {
        output = 5;
    }
    else if (input == 'F')
    {
        output = 6;
    }

    return output;
}
