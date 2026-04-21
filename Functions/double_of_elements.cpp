#include <iostream>
#include <cmath>
using namespace std;
int _2x;
void doubleofelements(int A[], int x){
cout<<"The elements of an array are:\n";
for (int i=0;i<x;i++){
     _2x=A[i]*A[i];
}
cout<<_2x;
}
void print(int A[], int x){
cout<<"The elements of an array are:\n";
for (int i=0;i<x;i++){
    cout<<A[i]<<" ";
}
}
int main(){
    int size;
    cout<<" the size of array is :";
    cin>>size;
    int A[size];
    cout<<"Enter the digit for of the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>A[i];
    }
    print(A,size);
    doubleofelements(A,size);

}