#include <iostream>
using namespace std;
void search(int A[],int x){
int  key;
cout<<"\nEnter the element to search:";
cin>>key;
int index;
 for(int i=0;i<x;i++){
    if (key==A[i]){
        index=i;
    }
}
cout<<"\nThe elemement found at index "<<index<<".";
}
void print(int A[],int x){
cout<<"\nThe   array is:";
for (int i=0;i<x;i++){
    cout<<A[i]<<" ";
}
}
int main(){
    int size;
    cout<<"Enter the size of an array:";
    cin>>size;
    int A[size];
    for(int i=0;i<size;i++){
        cin>>A[i];
    }
    print(A,size);
    search(A,size);
}
