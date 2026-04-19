// Write a program to determine whether a given character is a vowel or a consonant.
#include <iostream>
using namespace std;
int main()       //so for multiple conditions an adittional braces should be use
{
char letter;
cout<<"Enter an alphabatic letter:";
cin>>letter;    
if (( letter == 'a') || (letter == 'e') || (letter=='i') || (letter=='o') || (letter=='u'))
{
     cout<<"A vowel letter.";
}
else
{
     cout<<"A consonant letter.";
}
}