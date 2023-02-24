#include <iostream>
#include <windows.h>
#include <conio.h>
#include <fstream>

using namespace std;

string names[10];
int rollNumbers[10];
int percentages[10];
int studentCount = 0;
main()
{
    string name;
    string rollNumber;
    string percentage;

    fstream file;
    file.open("task12.txt", ios::in);
    while (!file.eof())
    {
        if (getline(file, name) && getline(file, rollNumber) && getline(file, percentage))
        {
            names[studentCount] = name;
            int admissionNumber = stoi(rollNumber);
            rollNumbers[studentCount] = admissionNumber;
            int percent = stof(percentage);
            percentages[studentCount] = percent;
            studentCount++;
        }
    }
    file.close();
    for (int i = 0; i < studentCount; i++)
    {
        if (percentages[i] > 60)
        {
            cout << "Name: " << names[i] << endl;
            cout << "Admission Number: " << rollNumbers[i] << endl;
            cout << "Percentage: " << percentages[i] << endl;
        }
    }
}