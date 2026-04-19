#include<iostream>
using namespace std;
int main(){
    int a = -1;
    int b = -a;
    bool x , y ;
    x=((a>0)&&(b<0)) || ((a<0)&&(b>0));
    y=((a<=0)|| (b>=0)) && ((a>=0) || (b<=0));
    cout<<(x==y)<<endl;
}