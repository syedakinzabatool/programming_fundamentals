#include<iostream>
using namespace std;
void Average(int A[],int x){
  
   int count=0;
   int sum=0;
   for(int i=0;i<x;i++){
    count++;
    sum+=A[i];
    }
    float avg=float(sum/count);
    cout<<"\nThe average of the elments of the array is:"<<avg;
    }
void print(int A[],int x){
cout<<"\nThe array is";
for(int i=0;i<x;i++)
    {
      cout<<A[i];
    }
}
int main(){
    int size;
    cout<<"Enter the size of array:";
    cin>>size;
    int A[size];
    cout<<"Enter the digit for of the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>A[i];
    }
    print(A,size);
    Average(A,size);
 

}