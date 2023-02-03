#include <iostream>
using namespace std;
main()
{
    string name;
    getline(cin, name);
    bool isfound = false;
    char find;
    cout << "Enter Character: ";
    cin >> find;
    for (int idx = 0; name[idx] != '\0'; idx++)
    {
        if (name[idx] == find)
        {
            isfound = true;
        }
    }
    if (isfound == true)
    {
        cout << "Character Found" << endl;
    }
    else
    {
        cout << "Character not found" << endl;
    }
}