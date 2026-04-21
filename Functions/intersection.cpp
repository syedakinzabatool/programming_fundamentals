#include <iostream>
using namespace std;
void updated_array(int A[],int x){
   cout<<" The updated array is:";
  for(int i=0; i<x;i++){
     for(int j=i+1;j<x;j++)
    {
        if ( A[i]==A[j]){
           for(int k=j;k<x;k++) {
          A[k] = A[k+1];
          --x;
          --j;
    }
   }
}
}}
void print(int A[], int x){
cout<<"The elements of an array are:\n";
for (int i=0;i<x;i++){
    cout<<A[i]<<" ";
}
}
int main(){
int size;
cout<<"Enter the size of array:";

cin>>size;
int A[size];
cout<<"\nEnter the elements of an array:";
for (int i=0;i<size;i++){
    cin>>A[i];
} 

updated_array(A,size);
print(A,size);
}