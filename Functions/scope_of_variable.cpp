// #include <iostream>
// using namespace std;
// void display();
// int y=8; //global variable
// int d=5;
// int main() 
// {
     
//      int a=9;
//      cout<<a;
//      display();
//      return 0;
// }
//  void display()
//  {
//     int c=6; //local variable
//     cout<<c;
//  }
//          <<--PARAMETER / ARGUMENT-->>
// #include <iostream>
// using namespace std;
// void display(float y,int x,char z)
// {
//     cout<<y<<" "<<x<<" "<<z;
// }
// int main()
// {
//     int a=5;
//     display(a,8 ,'k');
//     return 0;
// }
// #include <iostream>
// using namespace std;
// void display(int x)
// {
//     cout<<x;
// }
// int main()
// {
//     int a;
//     cout<<"enter an integer:";
//     cin>>a;
//     display(a);
//     return 0;
// }
#include<iostream>
using namespace std;                
  int sum(int x,int y,int z)
  {          
     return x+y+z;            
}
int product(int x,int y,int z)
{
    return x*y*z;
}                
  int main(){
    int a;
    int b;
    int c;
    cin>>a>>b>>c;
    
     cout<<"th sum is:"<<sum(a,b,c)<<"\n";
     cout<<product(a,b,c);
     }