/*Write A Program in c++ in which user select the options to Login, Registration, Forgot Password And exit the program. Apply the functions on the above options.
C++ Project for the Login and Registration Page
1.	Login
2.	Registration 
3.	Forgot Password
4.	Exit...
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void login();
void registration();
void forgot();

int main()
{
    int c;
    cout << "\t\t\t______________________________________________________ \n\n";
    cout << "\t\t\t             Welcome To The Login Page                  \n\n";
    cout << "\t\t\t_____________________MENU _____________________________  \n\n";
    cout << "\t    |          Press 1 to Login                               \n\n";
    cout << "\t    |          Press 2 to Registration                         \n\n";
    cout << "\t    |          Press 3 to Forgot Password                       \n\n";
    cout << "\t    |          Press 4 to Exit                                   \n\n";
    cout << "Enter your Choice : ";
    cin >> c;
    cout << endl;

    switch (c)
    {
    case 1:
        login();
        break;
    case 2:
        registration();
        break;
    case 3:
        forgot();
        break;
    case 4:
        cout << "\t\t\t    Thanks For Coming to Our Page !!!";
        break; // Add break statement here
    default:
        cout << "\t\t     Please choose a valid option from below :";
    }
}

void login()
{
    int count = 0;
    string userId, password, Id, pass;
    system("cls");
    cout << "\t\t\t  Please Enter the Username And the Password ";
    cout << endl;
    cout << "\t\t\t Enter the Username :";
    cin >> userId;
    cout << "\t\t\t Enter the Password :";
    cin >> password;
    ifstream input("records.txt"); // Use the correct file name "records.txt"
    while (input >> Id >> pass)
    {
        if (Id == userId && pass == password)
        {
            count = 1;
            system("cls");
        }
    }
    input.close();
    if (count == 1)
    {
        cout << userId << "\n You are logged in successfully. \n Thanks for coming to our Page.";
    }
    else
    {
        cout << "\t\t\t Login Error.\n Please Check your Username and the Password.";
    }
    main();
}

void registration()
{
    string ruserId, rpassword;
    system("cls");
    cout << "\t\t\t Enter the Username : ";
    cin >> ruserId;
    cout << "\t\t\t Enter the Password : ";
    cin >> rpassword;
    ofstream f1("records.txt", ios::app); // Use the correct file name "records.txt"
    f1 << ruserId << ' ' << rpassword << endl;
    system("cls");
    cout << "\t\t\t Registration is Successful.";
    main();
}

void forgot()
{
    int o;
    system("cls");
    cout << "\t\t\t You forgot your password? No worries \n ";
    cout << "Press 1 to search for your ID by your username." << endl;
    cout << "Press 2 to go back to the main menu." << endl;
    cout << "Enter your choice : ";
    cin >> o;
    switch (o)
    {
    case 1:
    {
        int count = 0;
        string suserId, Id, spass;
        cout << "\n\t\t\t Enter the username that you remember :";
        cin >> suserId;
        ifstream f2("records.txt");
        while (f2 >> Id >> spass) 
        {
            if (Id == suserId)
            {
                count = 1;
                break; 
            }
        }
        f2.close();
        if (count == 1)
        {
            cout << "\n\n Your Account Is Found";
            cout << "\n\n Your Password Is :" << spass; 
        }
        else
        {
            cout << "\n\t Your Account Is not Found.";
        }
        break;
    }
    case 2:
        main();
        break;
    default:
        cout << "\t\t\t Wrong Choice. Please Try Again .";
        break;
    }
}