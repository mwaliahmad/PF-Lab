#include <iostream>
#include <windows.h>
#include <conio.h>
#include <fstream>

using namespace std;

main()
{
    int length = 0;
    string line;
    fstream file;
    file.open("task08.txt", ios::in);
    while (!file.eof())
    {
        if (getline(file, line))
        {
            length = length + line.length();
        }
    }
    cout << length;
}