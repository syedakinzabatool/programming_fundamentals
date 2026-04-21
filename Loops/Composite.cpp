// write a code and check if the no. is composite or not?

#include <iostream>
using namespace std;
int main() 
{ int num;
cout<<"Enter a no.";
cin>>num;
bool flag =true;
 {
    for(int i=2; i<=num/2;  i++)
         if(num%i==0 ){
          flag = false;
          break;}
 }
      if (flag == true)
       {cout<<"prime";}
else
     {
    cout<<"composite";
     }
/*#include <iostream>
using namespace std;
int main() 
{ int n;
cout<<"Enter a no.";
cin>>n;
for(int i=2;i<=n;i++)
     if(n%i==0 ){
        cout<<"Composite no.";
        break;
     }*/
}
