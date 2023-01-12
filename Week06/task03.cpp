#include <iostream>
using namespace std;
string checkTitle(int age, char gender);
main()
{
    int age;
    char gender;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Gender: ";
    cin >> gender;
    string result = checkTitle(age, gender);
    cout << result;
}
string checkTitle(int age, char gender)
{
    string title;
    if (age >= 16 && gender == 'm')
    {
        title = "Mr.";
    }
    if (age < 16 && gender == 'm')
    {
        title = "Master.";
    }
    if (age >= 16 && gender == 'f')
    {
        title = "Ms.";
    }
    if (age < 16 && gender == 'f')
    {
        title = "Miss";
    }
    return title;
}