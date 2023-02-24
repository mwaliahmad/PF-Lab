#include <iostream>
#include <windows.h>
#include <conio.h>
#include <fstream>

using namespace std;

main()
{
    int counter = 0;
    int length = 0;
    char character;
    cout << "Enter Character: ";
    cin >> character;
    string line;
    fstream file;
    file.open("task09.txt", ios::in);
    while (!file.eof())
    {
        if (getline(file, line))
        {
            length = line.length();
            for (int i = 0; i < length; i++)
            {
                if (line[i] == character)
                {
                    counter++;
                }
            }
        }
    }
    cout << "The character " << character << " appears " << counter << " times:" << endl;
}