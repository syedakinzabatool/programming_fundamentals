# include <iostream>
using namespace std;
int main()
{
    int num ;
    cout<<"Enter the size : ";
    cin>>num;
    //for 1st portion
int  i,row,col,space;
for(row=1;row<=num;row++){
        for(space=1;space<=num-row;space++){
             cout<<" ";}
                 for(col=1;col<=row;col++){
                    cout<<col;}
              cout<<endl;
}}