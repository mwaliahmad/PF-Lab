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
    // getline(file, line);
    while (!file.eof())
    {
        file >> line;
        if (line.length() < 4)
        {
            cout << line << endl;
        }
    }
    file.close();
}