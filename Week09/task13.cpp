#include <iostream>
using namespace std;
main()
{
    cout << "Enter String: ";
    string name;
    getline(cin, name);
    cout << "Without Vowels: ";
    for (int idx = 0; name[idx] != '\0'; idx++)
    {
        if (name[idx] == 'a' || name[idx] == 'o' || name[idx] == 'i' || name[idx] == 'o' || name[idx] == 'u')
        {
            continue;
        }
        cout << name[idx];
    }
}