#include <iostream>
using namespace std;
float totalPrice(string product, string city, int quantity);
main()
{
    string product, city;
    int quantity;
    cout << "Enter Product Name: ";
    cin >> product;
    cout << "Enter City Name: ";
    cin >> city;
    cout << "Enter Product Quantity: ";
    cin >> quantity;
    float result = totalPrice(product, city, quantity);
    cout << result;
}
float totalPrice(string product, string city, int quantity)
{
    float finalprice;
    if (product == "coffee" && city == "sofia")
    {
        finalprice = quantity * 0.50;
    }
    else if (product == "coffee" && city == "plovdiv")
    {
        finalprice = quantity * 0.40;
    }
    else if (product == "coffee" && city == "varna")
    {
        finalprice = quantity * 0.45;
    }

    if (product == "water" && city == "sofia")
    {
        finalprice = quantity * 0.80;
    }
    else if (product == "water" && (city == "plovdiv" || city == "varna"))
    {
        finalprice = quantity * 0.70;
    }

    else if (product == "beer" && city == "sofia")
    {
        finalprice = quantity * 1.20;
    }
    else if (product == "beer" && city == "plovdiv")
    {
        finalprice = quantity * 1.15;
    }
    else if (product == "beer" && city == "varna")
    {
        finalprice = quantity * 1.10;
    }

    else if (product == "sweets" && city == "sofia")
    {
        finalprice = quantity * 1.45;
    }
    else if (product == "sweets" && city == "plovdiv")
    {
        finalprice = quantity * 1.30;
    }
    else if (product == "sweets" && city == "varna")
    {
        finalprice = quantity * 1.35;
    }

    else if (product == "peanuts" && city == "sofia")
    {
        finalprice = quantity * 1.60;
    }
    else if (product == "peanuts" && city == "plovdiv")
    {
        finalprice = quantity * 1.50;
    }
    else if (product == "peanuts" && city == "varna")
    {
        finalprice = quantity * 1.55;
    }
    return finalprice;
}