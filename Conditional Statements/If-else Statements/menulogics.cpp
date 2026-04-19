/* Write pseudocode to display a menu of options and 
allow the user to choose an option repeatedly until they choose to exit using a do-while loop.*/

#include <iostream>
using namespace std;
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
    cout<<"French"<<endl;
}
else if (option==2)
{
    cout<<"Italian"<<endl;
}
else if (option==3)
{
    cout<<"Chinese"<<endl;
}
else if (option==4)
{
    cout<<"Thai"<<endl;
}
else if (option==5)
{
    cout<<"Asian"<<endl;
}
else if(option==6)
{
    cout<<"Exiting the menu"<<endl;
}
else
{
    cout<<"Sorry! item is not available in menu.. OR Use the specific item"<<endl;
}
}
while( option != 6);
return 0;
}