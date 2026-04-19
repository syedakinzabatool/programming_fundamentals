#include <iostream>
using namespace std;
int main() 
{
      int ans ;
 int num_1;
cout<<"Enter 1st number :";
cin>>num_1;  
int num_2;
cout<<"Enter 2nd number:";
cin>>num_2;
char op ;
cout<<"Enter an operator:";
cin>>op;
switch(op){ 
case '+':
     cout<<num_1 + num_2; // answ = num_1 + num_2;
      break;

case '-':
  cout<<num_1 - num_2;
      break;
case '*':
      cout<<num_1 * num_2;
      break;

case '/': 
     cout<<num_1 / num_2;
      break;
default:
     cout<<"Enter a valid operator.";
}
// cout<<"Answer is :" << ans;
}
