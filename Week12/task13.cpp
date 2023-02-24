#include <iostream>
#include <windows.h>
#include <conio.h>
#include <fstream>

using namespace std;

main()
{
    string line;
    fstream file;
    file.open("data.txt", ios::in);
    getline(file, line);
    file.close();
    // cout << line;
    int length = line.length();
    int lineCounter = 0;
    if (line[0] != 'T')
    {
        lineCounter++;
    }
    for (int i = 0; i < length; i++)
    {
        if (line[i] == '.' && line[i + 1] == ' ' && line[i + 2] != 'T')
        {
            lineCounter++;
        }
    }
    cout << lineCounter;
}