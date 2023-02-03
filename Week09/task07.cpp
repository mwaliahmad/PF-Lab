#include <iostream>
using namespace std;
main()
{
    string name;
    getline(cin, name);
    int counter = name.length();

    for (int idx = counter; idx >= 0; idx--)
    {
        cout << name[idx];
    }
}