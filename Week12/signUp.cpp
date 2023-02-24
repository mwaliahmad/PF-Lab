#include <iostream>
#include <fstream>
#include <iomanip>
#include <windows.h>
#include <conio.h>

using namespace std;

// functions
int menu();
void signUp(string username, string password);
bool signIn(string username, string password);
void view();
void storeToFile(string username, string password);
void loadFile();
bool isValid(string username);

// Global Array
string usernames[100];
string passwords[100];
int count = 0;

main()
{
    loadFile();
    string name, pass;
    int choice = 5;
    while (choice != 0)
    {
        system("cls");
        choice = menu();
        if (choice == 1)
        {
            system("cls");
            cout << "Enter Username: ";
            cin >> name;
            cout << "Enter Password: ";
            cin >> pass;
            bool valid = isValid(name);
            if (valid == true)
            {
                signUp(name, pass);
                storeToFile(name, pass);
            }
            else
            {
                cout << "User Already Present ..." << endl;
            }
            cout << "Press Any Key";
            getch();
        }

        if (choice == 2)
        {
            system("cls");
            cout << "Enter Username: ";
            cin >> name;
            cout << "Enter Password: ";
            cin >> pass;
            bool valid = signIn(name, pass);
            if (valid == true)
            {
                cout << "SIGN IN ";
            }
            else
            {
                cout << "Sign Up First..." << endl;
            }
            cout << "Press Any Key";
            getch();
        }

        if (choice == 3)
        {
            view();
            getch();
        }
    }
}

int menu()
{
    int choice;
    cout << "1. Sign Up a User" << endl;
    cout << "2. Sign In a User" << endl;
    cout << "3. View all Users" << endl;
    cout << "0. Exit" << endl;
    cout << endl;
    cout << "Enter Your Option: ";
    cin >> choice;
    return choice;
}

void signUp(string username, string password)
{
    usernames[count] = username;
    passwords[count] = password;
    count++;
}

bool signIn(string username, string password)
{
    for (int i = 0; i < count; i++)
    {
        if ((usernames[i] == username) && (passwords[i] == password))
        {
            return true;
        }
    }
    return false;
}

void view()
{
    cout << left << setw(20) << "Usernames" << left << setw(20) << "Passwords" << endl;
    for (int i = 0; i < count; i++)
    {
        cout << left << setw(20) << usernames[i] << left << setw(20) << passwords[i];
    }
}

void storeToFile(string username, string password)
{
    fstream file;
    file.open("Data.txt", ios::app);
    file << username << endl;
    file << password << endl;
    file.close();
}

void loadFile()
{
    string name, pass;
    fstream file;
    file.open("Data.txt", ios::in);
    while (getline(file, name) && getline(file, pass))
    {
        usernames[count] = name;
        passwords[count] = pass;
        count++;
    }
    file.close();
}

bool isValid(string username)
{
    for (int i = 0; i < count; i++)
    {
        if (usernames[i] == username)
        {
            return false;
        }
    }
    return true;
}
