#include<iostream>
using namespace std;
int sum (int n )
{
     
    if (n==1) return 1;
     return n+sum(n-1);
    
}
int main()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;
    cout<<sum(n);

}
/*#include<iostream>
using namespace std;
int sum(int num)
{
    if (num!=0)
    return (num+sum(num-1)); //sum() function calls itself.
    else
    return num; 
}
int main(){
    int n;
    cout<<"Enter number till which you want the sum of natural numbres to be calculated:";
    cin>>n;
    int total=sum(n);
    cout<<endl<<"Sum of natural numbers from 1 to "<<n<<"are:"<<total<<endl;
    return 0;

}*/