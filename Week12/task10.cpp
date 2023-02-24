#include <iostream>
#include <windows.h>
#include <conio.h>
#include <fstream>

using namespace std;

string names[100];
int ages[100];
float matricMarks[100];
float interMarks[100];
float ecatMarks[100];
int studentCount = 0;

void inputData();
void storeData();

main()
{
    int choice;
    while (choice != 0)
    {
        cout << "1. Enter Student Data" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter Choice: ";
        cin >> choice;
        if (choice == 1)
        {
            inputData();
            storeData();
        }
    }
}

void inputData()
{
    system("cls");
    string name;
    int age;
    float matricMark;
    float interMark;
    float ecatMark;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Matric Marks: ";
    cin >> matricMark;
    cout << "Enter Inter Marks: ";
    cin >> interMark;
    cout << "Enter Ecat Marks: ";
    cin >> ecatMark;
    names[studentCount] = name;
    ages[studentCount] = age;
    matricMarks[studentCount] = matricMark;
    interMarks[studentCount] = interMark;
    ecatMarks[studentCount] = ecatMark;
    studentCount++;
}

void storeData()
{
    fstream file;
    file.open("task10.txt", ios::app);
    for (int i = 0; i < studentCount; i++)
    {
        file << names[i] << "," << ages[i] << "," << matricMarks[i] << "," << interMarks[i] << "," << ecatMarks[i] << endl;
    }
}
