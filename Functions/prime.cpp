#include <iostream>
using namespace std;
void even(int x)
{
if(x%2==0 )
cout<<"An even number.";
}

int main(){
int num;
cout<<"Enter a number:";
cin>>num;
even(num);
}