#include <iostream>
using namespace std;
char grade(int marks);
main()
{
    int marks;
    cout << "Enter Marks: ";
    cin >> marks;
    char Grade = grade(marks);
    cout << "Your Grade: " << Grade;
}

char grade(int marks)
{
    char grade;
    if (marks < 50)
    {
        grade = 'F';
    }
    if (marks > 50 && marks <= 60)
    {
        grade = 'E';
    }
    if (marks > 60 && marks <= 70)
    {
        grade = 'D';
    }
    if (marks > 70 && marks <= 80)
    {
        grade = 'C';
    }
    if (marks > 80 && marks <= 85)
    {
        grade = 'B';
    }
    else
    {
        grade = 'A';
    }
    return grade;
}
