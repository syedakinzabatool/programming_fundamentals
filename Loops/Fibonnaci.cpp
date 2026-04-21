#include<iostream>  
using namespace std;
int main ()
{
 int limit;
 cout<<"enter your limit :";
 cin>>limit;
int a=0,b=1,nt;
for(int i=0;i<=limit;i++)
{
cout<<a<<endl;
 nt=a+b;
 a=b;
 b=nt;

 }
}