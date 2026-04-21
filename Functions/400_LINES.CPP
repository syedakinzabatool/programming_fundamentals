#include <iostream>
#include <ctime>
using namespace std;

float processProduct(char productCode, float &bill);
float shop();

int main()
{
    char start;
    float total;
    char choice;

startLabel:
    cout << "Please press H to start shopping for Home appliances : " << endl;

start:
    cin >> start;
    if (start == 'h' || start == 'H')
    {
        total = shop();
        time_t t = time(NULL);
        tm *tPtr = localtime(&t);

        cout << "Bill Date: ";
        cout << tPtr->tm_mday << "/";
        cout << 1 + tPtr->tm_mon << "/";
        cout << 1900 + tPtr->tm_year << endl;

        cout << "Bill time: " << tPtr->tm_hour << ":" << tPtr->tm_min << ":" << tPtr->tm_sec << endl;
        cout << "Total Bill Amount: " << total << endl;

        if (total > 50000 && total <= 100000)
        {
            total = total - (0.05 * total);
            cout << "Total discount: 5%" << endl;
        }
        else if (total > 100000 && total <= 125000)
        {
            total = total - (0.1 * total);
            cout << "Total discount: 10%" << endl;
        }
        else if (total > 125000 && total <= 150000)
        {
            total = total - (0.25 * total);
            cout << "Total discount: 25%" << endl;
        }
        else if (total > 150000)
        {
            total = total - (0.5 * total);
            cout << "Total discount: 50%" << endl;
        }

        cout << "Total bill amount after discount: " << total << endl;

    Again:
        cout << "Do you want to shop again? Enter y or n" << endl;
        cin >> choice;
        if (choice == 'y' || choice == 'Y')
        {
            goto startLabel;
        }
        else if (choice == 'n' || choice == 'N')
        {
            cout << "Thanks for shopping!" << endl;
        }
        else
        {
            cout << "You have entered the wrong option, please press H" << endl;
            goto Again;
        }
    }
    else
    {
        cout << "You have entered the wrong option, please press H to start again" << endl;
        goto start;
    }

    return 0;
}

float shop()
{
    char choice;
    char product;
    int quantity;
    float bill = 0;

itemLevel:
    cout << "Welcome" << endl;
    cout << "Please follow the instructions_" << endl;
    cout << " 1) Please enter r to order Refrigerator" << endl;
    cout << " 2) Please enter w to order Washing machine" << endl;
    cout << " 3) Please enter t to order Television" << endl;
    cout << " 4) Please enter m to order Microwave" << endl;
    cout << " 5) Please enter a to order Air conditioner" << endl;

    cin >> choice;

    if (choice == 'r' || choice == 'R' || choice == 'w' || choice == 'W' || choice == 't' || choice == 'T' || choice == 'm' || choice == 'M' || choice == 'a' || choice == 'A')
    {
        if (choice == 'r' || choice == 'R')
        {
        Refrigerator:
            cout << "Refrigerator Details_" << endl;
            cout << " 1) Whirlpool => Price: 40000 |" << endl;
            cout << " 2) Samsung => Price: 25000   |" << endl;
            cout << " 3) Haier => Price: 20000     |" << endl;
            cout << " 4) Voltas => Price: 18000    |" << endl;
            cout << " 5) Godrej => Price: 30000    |" << endl;
            cout << " 6) Panasonic => Price: 35000 |" << endl;
            cout << "   Please enter your choice    " << endl;
            cin >> product;

            if (product == '1')
            {
                cout << "Please enter the quantity of the product: ";
                cin >> quantity;
                bill += quantity * 40000;
            }
            else if (product == '2')
            {
                cout << "Please enter the quantity of the product: ";
                cin >> quantity;
                bill += quantity * 25000;
            }
            else if (product == '3')
            {
                cout << "Please enter the quantity of the product: ";
                cin >> quantity;
                bill += quantity * 20000;
            }
            else if (product == '4')
            {
                cout << "Please enter the quantity of the product: ";
                cin >> quantity;
                bill += quantity * 18000;
            }
            else if (product == '5')
            {
                cout << "Please enter the quantity of the product: ";
                cin >> quantity;
                bill += quantity * 30000;
            }
            else if (product == '6')
            {
                cout << "Please enter the quantity of the product: ";
                cin >> quantity;
                bill += quantity * 35000;
            }
            else
            {
                cout << "You entered the wrong option. Please try again!" << endl;
                goto Refrigerator;
            }
        }
        else if (choice == 'w' || choice == 'W')
        {
        Washing_Machine:
            cout << "Washing Machine Details_" << endl;
            cout << " 1) Whirlpool => Price: 40000 |" << endl;
            cout << " 2) Samsung => Price: 25000   |" << endl;
            cout << " 3) Haier => Price: 20000     |" << endl;
            cout << " 4) Voltas => Price: 18000    |" << endl;
            cout << " 5) Godrej => Price: 30000    |" << endl;
            cout << " 6) Panasonic => Price: 35000 |" << endl;
            cout << "   Please enter your choice    " << endl;
            cin >> product;
            if (product == '1')
            {
                cout << "Please enter the quantity of the product: ";
                cin >> quantity;
                bill += quantity * 40000;
            }
            else if (product == '2')
            {
                cout << "Please enter the quantity of the product: ";
                cin >> quantity;
                bill += quantity * 25000;
            }
            else if (product == '3')
            {
                cout << "Please enter the quantity of the product: ";
                cin >> quantity;
                bill += quantity * 20000;
            }
            else if (product == '4')
            {
                cout << "Please enter the quantity of the product: ";
                cin >> quantity;
                bill += quantity * 18000;
            }
            else if (product == '5')
            {
                cout << "Please enter the quantity of the product: ";
                cin >> quantity;
                bill += quantity * 30000;
            }
            else if (product == '6')
            {
                cout << "Please enter the quantity of the product: ";
                cin >> quantity;
                bill += quantity * 35000;
            }
            else
            {
                cout << "You entered the wrong option. Please try again!" << endl;
                goto Washing_Machine;
            }
        }
        else if (choice == 't' || choice == 'T')
        {
        Television:
            cout << "Television Details_" << endl;
            cout << " 1) Whirlpool => Price: 40000 |" << endl;
            cout << " 2) Samsung => Price: 25000   |" << endl;
            cout << " 3) Haier => Price: 20000     |" << endl;
            cout << " 4) Voltas => Price: 18000    |" << endl;
            cout << " 5) Godrej => Price: 30000    |" << endl;
            cout << " 6) Panasonic => Price: 35000 |" << endl;
            cout << "   Please enter your choice    " << endl;
            cin >> product;
            if (product == '1')
            {
                cout << "Please enter the quantity of the product: ";
                cin >> quantity;
                bill += quantity * 40000;
            }
            else if (product == '2')
            {
                cout << "Please enter the quantity of the product: ";
                cin >> quantity;
                bill += quantity * 25000;
            }
            else if (product == '3')
            {
                cout << "Please enter the quantity of the product: ";
                cin >> quantity;
                bill += quantity * 20000;
            }
            else if (product == '4')
            {
                cout << "Please enter the quantity of the product: ";
                cin >> quantity;
                bill += quantity * 18000;
            }
            else if (product == '5')
            {
                cout << "Please enter the quantity of the product: ";
                cin >> quantity;
                bill += quantity * 30000;
            }
            else if (product == '6')
            {
                cout << "Please enter the quantity of the product: ";
                cin >> quantity;
                bill += quantity * 35000;
            }
            else
            {
                cout << "You entered the wrong option. Please try again!" << endl;
                goto Television;
            }
        }
        else if (choice == 'm' || choice == 'M')
        {
        Microwave:
            cout << "Microwave Details_" << endl;
            cout << " 1) Whirlpool => Price: 40000 |" << endl;
            cout << " 2) Samsung => Price: 25000   |" << endl;
            cout << " 3) Haier => Price: 20000     |" << endl;
            cout << " 4) Voltas => Price: 18000    |" << endl;
            cout << " 5) Godrej => Price: 30000    |" << endl;
            cout << " 6) Panasonic => Price: 35000 |" << endl;
            cout << "   Please enter your choice    " << endl;
            cin >> product;
            if (product == '1')
            {
                cout << "Please enter the quantity of the product: ";
                cin >> quantity;
                bill += quantity * 40000;
            }
            else if (product == '2')
            {
                cout << "Please enter the quantity of the product: ";
                cin >> quantity;
                bill += quantity * 25000;
            }
            else if (product == '3')
            {
                cout << "Please enter the quantity of the product: ";
                cin >> quantity;
                bill += quantity * 20000;
            }
            else if (product == '4')
            {
                cout << "Please enter the quantity of the product: ";
                cin >> quantity;
                bill += quantity * 18000;
            }
            else if (product == '5')
            {
                cout << "Please enter the quantity of the product: ";
                cin >> quantity;
                bill += quantity * 30000;
            }
            else if (product == '6')
            {
                cout << "Please enter the quantity of the product: ";
                cin >> quantity;
                bill += quantity * 35000;
            }
            else
            {
                cout << "You entered the wrong option. Please try again!" << endl;
                goto Microwave;
            }
        }
        else if (choice == 'a' || choice == 'A')
        {
        Air_Conditioner:
            cout << "Air Conditioner Details_" << endl;
            cout << " 1) Whirlpool => Price: 40000 |" << endl;
            cout << " 2) Samsung => Price: 25000   |" << endl;
            cout << " 3) Haier => Price: 20000     |" << endl;
            cout << " 4) Voltas => Price: 18000    |" << endl;
            cout << " 5) Godrej => Price: 30000    |" << endl;
            cout << " 6) Panasonic => Price: 35000 |" << endl;
            cout << "   Please enter your choice    " << endl;
            cin >> product;
            if (product == '1')
                {
                    cout << "Please enter the quantity of the product: ";
                    cin >> quantity;
                    bill += quantity * 40000;
                }
            else if (product == '2')
                {
                    cout << "Please enter the quantity of the product: ";
                    cin >> quantity;
                    bill += quantity * 25000;
                }
                else if (product == '3')
                {
                    cout << "Please enter the quantity of the product: ";
                    cin >> quantity;
                    bill += quantity * 20000;
                }
                else if (product == '4')
                {
                    cout << "Please enter the quantity of the product: ";
                    cin >> quantity;
                    bill += quantity * 18000;
                }
                else if (product == '5')
                {
                    cout << "Please enter the quantity of the product: ";
                    cin >> quantity;
                    bill += quantity * 30000;
                }
                else if (product == '6')
                {
                    cout << "Please enter the quantity of the product: ";
                    cin >> quantity;
                    bill += quantity * 35000;
                }
                else
                {
                    cout << "You entered the wrong option. Please try again!" << endl;
                    goto Air_Conditioner;
                }
            }
        }
    else
    {
        cout << "You entered a wrong choice. Please try again!";
        goto itemLevel;
    }
    return bill;
}