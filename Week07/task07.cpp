#include <iostream>
using namespace std;
void printPercentage(int number);
int main()
{
    int number;
    cout << "Enter Number: ";

    cin >> number;
    printPercentage(number);
}

void printPercentage(int number)
{
    int p1 = 0;
    int p2 = 0;
    int p3 = 0;
    int p4 = 0;
    int p5 = 0;
    int digits;

    for (int x = 0; x < number; x++)
    {
        cin >> digits;

        if (digits < 200)
        {
            p1 = p1 + 1;
        }
        else if (digits >= 200 && digits < 400)
        {
            p2 = p2 + 1;
        }
        else if (digits >= 400 && digits < 600)
        {
            p3 = p3 + 1;
        }
        else if (digits >= 600 && digits < 800)
        {
            p4 = p4 + 1;
        }
        else if (digits >= 800)
        {
            p5 = p5 + 1;
        }
    }

    float p = p1 + p2 + p3 + p4 + p5;

    float p1percent = (p1 / p) * 100;
    float p2percent = (p2 / p) * 100;
    float p3percent = (p3 / p) * 100;
    float p4percent = (p4 / p) * 100;
    float p5percent = (p5 / p) * 100;
    cout << endl;
    cout << p1percent << " %" << endl;
    cout << p2percent << " %" << endl;
    cout << p3percent << " %" << endl;
    cout << p4percent << " %" << endl;
    cout << p5percent << " %" << endl;
}
