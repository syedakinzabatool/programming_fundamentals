// write c++ program to check that in the selected password is the only one Alphabet is capital or not ,
//  @ least one special character is used or not ,  if the lenghth of the password is leesser than 6 , 
//  suggest that to rewite the new password , if the password length is > 8 ,
//   then also write its a strong password , there should be
//  @ least one capital letter , one special character , 3 numbers and greater lenghth > 6 
//  using nested if else conditions
    #include <iostream>
    using namespace std;
    int main()
{
    string password;
    cout<<"Enter a password";
    cin>>password;
    int length_of_password;
    char any_alphabet;
    if((any_alphabet!='Capital')|| (password != "special_character") || (length_of_password <6) || (password < "3 numbers"))
    {
        cout<<"Write a new password";
    }
    else 
    if ((any_alphabet=='Capital') && (password == "special_character") && (length_of_password >=8 ) && (password >="3 numbers"))
    {
        cout<<"It's a strong password";
    }
    return 0;
}