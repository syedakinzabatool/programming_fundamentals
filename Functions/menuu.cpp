/* Write pseudocode to display a menu of options and 
allow the user to choose an option repeatedly until they choose to exit using a do-while loop.*/

#include <iostream>
using namespace std;
void option_1(){
    cout<<"French"<<endl;
}
void option_2(){ 
    cout<<"Italian"<<endl;
}
void option_3(){
    cout<<"Chinese"<<endl;
}
void option_4(){
    cout<<"Thai"<<endl;
}
void option_5(){
    cout<<"Asian"<<endl;
}
void option_6(){
    cout<<"Exiting the menu"<<endl;
}
void option_7(){
 cout<<"Sorry! item is not available in menu.. OR Use the specific item"<<endl;
}
int main()

{
cout<<"Menu."<<endl;
int option;
cout<<"Select an option regarding which food you want. "<<endl;
cout<<"Option.1 French"<<endl;
cout<<"Option 2. Italian"<<endl;
cout<<"Option 3. Chinese"<<endl;
cout<<"Option 4. Thai"<<endl;
cout<<"Option 5. Asian"<<endl;
cout<<"Option 6. Exit the menu"<<endl;

do
{
    cout<<"Choose your desire food :";
    cin>>option;
if (option== 1)
{
     option_1();
}
else if (option==2)
{
    option_2();
}
else if (option==3)
  {                                                                
    option_3();
}
else if (option==4)
{
    option_4();
}
else if (option==5)
{
    option_5();
}
else if(option==6)
{
    option_6();
}
else
{
    void option_7();
}}
while( option != 6);
return 0;
}