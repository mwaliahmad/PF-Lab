#include <iostream>
using namespace std;
int check(int size, char letter);
string words[20];
main()
{
    int size;
    cout << "Enter how many digits you want to enter: ";
    cin >> size;

    char letter;
    cout << "Enter the letter you want to count: ";
    cin >> letter;
    for (int index = 0; index < size; index++)
    {
        cout << "Enter Word: ";
        cin >> words[index];
    }
    int counter = check(size, letter);
    cout << counter;
}

int check(int size, char letter)
{
    int count = 0;
    for (int idx = 0; idx < size; idx++)
    {
        string word = words[idx];
        for (int i = 0; word[i] != '\0'; i++)
        {
            if (letter == word[i])
            {
                count++;
            }
        }
    }
    return count;
}
