#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>

using namespace std;

main()
{
    int count = 0;
    string name;
    fstream file;
    file.open("example.txt", ios ::in);
    while (!file.eof())
    {
        getline(file, name);
        count++;
    }

    cout << "Number of lines: " << count;
    file.close();
}