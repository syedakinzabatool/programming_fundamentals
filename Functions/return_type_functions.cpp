/*#include<iostream>
using namespace std;               //if we use  a data  type we have to return it. 
  int sum(int a ,int b){           //or we can say that we use return here so that we've to return
     return a+b;            // the respective data type
}                 // and if we use data  type we have to cout function.
  int main(){
     cout<<sum(5,20);}
   

#include<iostream>
using namespace std;    //==> void mean we don't want to return anything.
void sum(int a ,int b){
        cout<<a+b;
}
int main(){
     sum(5,20);}
   
*/
#include<iostream>
using namespace std;                
    int sum(int a ,int b){
    int s;           
     return s;            
  }
  int main(){
    int result;
    result =sum(5,20);
    cout<<"The return value is="<<result;
}
#include <iostream>              // Inam Ul Hassan (219)
using namespace std;

int increment_array(int A[], int x);
int decrement_array(int A[], int x);

int main()
{
    int x;
    cout << "Enter the size of an Array: ";
    cin >> x;
    cout << "_" << endl;
    int A[x];

    for (int i = 0; i < x; i++)
    {
        cout << "Enter Number : ";
        cin >> A[i];
    }
    increment_array(A, x);
    decrement_array(A, x);

    return 0;
}

int increment_array(int A[], int x)
{
    cout << "Incremented array is :";
    int ia[x];

    for (int i = 0; i < x; i++)
    {
        ia[i] = A[i] + 1;
        cout << " " << ia[i];
    }
}

int decrement_array(int A[], int x)
{
    cout << "Decremented array is : ";
    int da[x];

    for (int i = 0; i < x; i++)
    {
        da[i] = A[i] - 2;
        cout << " " << da[i];
    }
    cout << endl;
}