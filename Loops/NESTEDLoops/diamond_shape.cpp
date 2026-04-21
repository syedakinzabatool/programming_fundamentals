# include <iostream>
using namespace std;
int main()
{
    //for 1st portion
int i,row,col,space;
for(row=1;row<=4;row++){
        for(space=1;space<=4-row;space++){
             cout<<" ";}
                 for(col=1;col<=row*2-1;col++){
                    cout<<"*";}
              cout<<endl;
}
//for remaining portion
for (row=3;row>=1;row--){
         for(space=1;space<=4-row;space++){
               cout<<" ";}
                 for(col=1;col<=row*2-1;col++){
                    cout<<"*";}
                    cout<<endl;
}
return 0;
}

