#include <iostream>

using namespace std;

main()
{
    string input;
    cout << "Enter your stirng: ";
    getline(cin, input);
    int size = input.length();

    int spaceIndex = 0, lastIndex = size;
    for (int i = size - 1; i >= 0; i--)
    {
        if (input[i] == ' ')
        {
            spaceIndex = i;
            for (int j = spaceIndex; j <= lastIndex; j++)
            {
                cout << input[j];
            }
            cout << " ";
            lastIndex = spaceIndex;
        }

        if (i == 0)
        {
            for (int k = 0; k <= lastIndex; k++)
            {
                cout << input[k];
            }
        }
    }
    cout << " ";
}