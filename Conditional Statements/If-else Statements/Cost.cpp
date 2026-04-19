/*Create a program that calculates the total cost of items based on quantity and unit price, 
applying a discount if the total cost exceeds a certain amount.*/

# include <iostream>
using namespace std;
int main()
{
int quantity;
cout<<"Enter quantity of product:";
cin>>quantity;
int prize = 100;
int cost=quantity*prize;
cout<<"Cost is:";
cout<<cost<<endl;

   
   if(cost >=500 && cost<1000)
{
     cout<<"Congrats! You got a discount of 25%.After discout the Cost is:"<<endl<<(0.25*cost);
}
else if(cost>=1000 && cost<1500)
   {
     cout<<"Congrats! You got a discount of 50%.After discout the Cost is:"<<endl<<(0.5*cost);
    }
 else if(cost >=1500)
{
     cout<<"Congrats! You got a discount of 75%.After discout the Cost is:"<<endl<<(0.75*cost);
}
else
{
     cout<<"No discout is applicable.";
}
}