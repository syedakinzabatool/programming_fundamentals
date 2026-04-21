#include<iostream>
using namespace std;
int even_element_sum=0 ,even_index_sum=0 ,even_element_count=0;
int odd_element_sum=0,odd_index_sum=0 ,odd_element_count=0;

int even_element(int A[],int x){
   for(int i=0;i<x;i++){
        if(A[i]%2==0){
        even_element_count++;
        even_element_sum+=A[i];
   }
  }
    cout<<"The even elements are :"<<even_element_count<<endl;
    return even_element_sum;
}

int odd_element(int A[],int x){
    for(int i=0;i<x;i++){
        if(A[i]%2!=0){
        odd_element_count++;
        odd_element_sum+=A[i];
        }
    }
    cout<<"\nThe odd elements are: "<<odd_element_count;
    return odd_element_sum;
}

int even_index(int A[],int x){
    for(int i=0;i<x;i++){
        if(i%2==0){
        even_index_sum+=A[i]; 
        }
    }
     return even_index_sum;
}

int odd_index(int A[],int x){
    for(int i=0;i<x;i++){
        if(i%2!=0){
        odd_index_sum=odd_index_sum+A[i];
      }
  }
    return odd_index_sum;
}

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int A[size];
    cout<<"Enter the elements: \n";

    for(int i=0;i<size;i++){
        cin>>A[i];
    }
    cout<<"The sum of even elements is: "<<even_element(A,size);
    cout<<"\nThe sum of odd elements is: "<< odd_element(A,size);
    cout<<"\nThe sum of even indices is: "<<even_index(A,size);
    cout<<"\nThe sum of odd indices is: "<< odd_index (A,size);
    }