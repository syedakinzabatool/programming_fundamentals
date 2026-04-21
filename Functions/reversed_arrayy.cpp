#include <iostream>
using namespace std;
void reverse(int A[],int x){
    cout<<"The reverse array is: ";
     for(int i=x-1;i>=0;i--){
        cout<<A[i];
      }
    }
    int main(){
    int size;
    cout<<"Enter the size of an array:";
    cin>>size;
    int A[size];
    cout<<"Enter Elements:";
    for(int i=0;i<size;i++){
        cin>>A[i];
    }
   reverse(A,size);
}