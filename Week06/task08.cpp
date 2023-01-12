#include <iostream>
using namespace std;
float totalBudget(float budget, string category, int member);
main()
{
    float budget;
    string category;
    int member;
    cout << "Enter Your Budget: ";
    cin >> budget;
    cout << "Enter Your Category: ";
    cin >> category;
    cout << "Enter Number of member : ";
    cin >> member;
    double result = totalBudget(budget, category, member);
    if (result < 0)
    {
        cout << "Yes! You have " << -1 * result << " QR left.";
    }
    if (result > 0)
    {
        cout << "Not! enough money! You need " << result << " QR.";
    }
}

float totalBudget(float budget, string category, int member)
{
    float vip = 499.99;
    float normal = 249.99;
    float budgetafterT;
    float ticketbudget;
    float remianing;
    if (member <= 4)
    {
        budgetafterT = budget * 0.25;
        if (category == "vip")
        {
            ticketbudget = member * vip;
            remianing = ticketbudget - budgetafterT;
        }
        else if (category == "normal")
        {
            ticketbudget = member * normal;
            remianing = ticketbudget - budgetafterT;
        }
    }
    else if (member >= 5 || member <= 9)
    {
        budgetafterT = budget * 0.40;
        if (category == "vip")
        {
            ticketbudget = member * vip;
            remianing = ticketbudget - budgetafterT;
        }
        else if (category == "normal")
        {
            ticketbudget = member * normal;
            remianing = ticketbudget - budgetafterT;
        }
    }
    else if (member >= 10 || member <= 24)
    {
        budgetafterT = budget * 0.50;
        if (category == "vip")
        {
            ticketbudget = member * vip;
            remianing = ticketbudget - budgetafterT;
        }
        else if (category == "normal")
        {
            ticketbudget = member * normal;
            remianing = ticketbudget - budgetafterT;
        }
    }
    else if (member >= 25 || member <= 49)
    {
        budgetafterT = budget * 0.60;
        if (category == "vip")
        {
            ticketbudget = member * vip;
            remianing = ticketbudget - budgetafterT;
        }
        else if (category == "normal")
        {
            ticketbudget = member * normal;
            remianing = ticketbudget - budgetafterT;
        }
    }
    else if (member >= 50)
    {
        budgetafterT = budget * 0.75;
        if (category == "vip")
        {
            ticketbudget = member * vip;
            remianing = ticketbudget - budgetafterT;
        }
        else if (category == "normal")
        {
            ticketbudget = member * normal;
            remianing = ticketbudget - budgetafterT;
        }
    }
    return remianing;
}
