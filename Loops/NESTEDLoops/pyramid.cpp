# include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number :";
    cin>>num;
    int i,row,col,space;
    
    //for rows:
    for(row=1;row<=num;row++){
        //for space:
        for(space=1;space<=num-row;space++){
             cout<<" ";
             }
        //for coloumn
        for(col=1;col<=row*2-1;col++){
                    cout<<"*";
             }
              cout<<endl;
}
}

