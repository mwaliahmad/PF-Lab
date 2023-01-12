#include <iostream>
#include <cmath>
using namespace std;
float totalHoliday(string year, int holidays, int visit);
main()
{
    string year;
    int holidays, visit;
    cout << "Enter Year Category: ";
    cin >> year;
    cout << "Enter Year's Holidays: ";
    cin >> holidays;
    cout << "Enter Year's Visits: ";
    cin >> visit;
    int result = totalHoliday(year, holidays, visit);
    cout << result << endl;
}

float totalHoliday(string year, int holidays, int visit)
{
    float weekend;
    float finalholidays;
    float fholidays;
    if (year == "normal")
    {
        weekend = ((48 - visit) * 3) / 4;
        finalholidays = weekend + ((holidays * 2) / 3) + visit;
    }
    else if (year == "leap")
    {
        weekend = ((48 - visit) * 3) / 4;
        fholidays = (weekend + ((holidays * 2) / 3)) + visit;
        finalholidays = fholidays * 1.15;
    }
    return finalholidays;
}
/*float Result1 = ceil(result);
    float Result2 = floor(result);
    cout << "C" << Result1 << endl;
    cout << "F" << Result2;*/