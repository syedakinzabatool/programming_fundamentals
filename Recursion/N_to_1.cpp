// //basically it is the replacement of a for loop
// #include <iostream>
// using namespace std;
// void number(int x,int n){
//     if (x>n) return;//base case as "condition" in loop
//      cout<<x<<endl;//work
//      number(x+1,n); //call

//     }
//     int main(){
//         int n;
//         cout<<"Enter a number:";
//         cin>>n;
//         number(1,n);
//     }
   
   //print without using another parameter.
#include <iostream>
using namespace std;
void number(int n){
    if (n==0) return;
   cout<<n<<endl; //work later
      number(n-1);//call before
    }
    int main(){
        int n;
        cout<<"Enter a number:";
        cin>>n;
        number(n);
    }