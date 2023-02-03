#include <iostream>
using namespace std;
main()
{
    string name;
    getline(cin, name);
    bool isfound = false;
    for (int idx = 0; name[idx] != '\0'; idx++)
    {
        if (name[idx] == 'a' || name[idx] == 'o' || name[idx] == 'i' || name[idx] == 'o' || name[idx] == 'u')
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