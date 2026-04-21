//left_diagonal_sum
#include <iostream>
using namespace std;
int diagonal(int A[100][100],int x,int y){
    int d_sum=0;
   
    cout<<"The left-diagonal sum is:";
    
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(i==j){
            d_sum+=A[i][j];
            }
        }
    }
    return d_sum;
}
int main(){
    int rows;
    cout<<"Enter the number of rows:";
    cin>>rows;
    int cols;
    cout<<"Enter the number of columns:";
    cin>>cols;
    int A[100][100];
    cout<<"Enter the elements:\n";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>A[i][j];
        }
    }
    cout<<diagonal(A,rows,cols);
}