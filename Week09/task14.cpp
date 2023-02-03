#include <iostream>
using namespace std;
main()
{
    cout << "Enter String: ";
    string name;
    getline(cin, name);
    int count = 0;
    for (int idx = 0; name[idx] != '\0'; idx++)
    {
        if (name[idx] == 'a' || name[idx] == 'o' || name[idx] == 'i' || name[idx] == 'o' || name[idx] == 'u')
        {
            count++;
        }
    }
    cout << "Vowels: " << count;
}