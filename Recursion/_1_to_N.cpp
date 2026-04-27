#include <iostream>
using namespace std;
void number(int n){
    if (n==0) return;
    number(n-1);
    cout<<n<<endl;

    }
    int main(){
        int n;
        cout<<"Enter a number:";
        cin>>n;
        number(n);
    }