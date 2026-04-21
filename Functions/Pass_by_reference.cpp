#include <iostream>
using namespace std;
void change(int arr[]){
    arr[0]=9; //can also change name and call and this will not effect.
      // bcz here memory location matters, which is same.
}
int main()
{
    int arr[3]={1,2,3};
    for(int i=0;i<=2;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    change(arr);
    for(int i=0;i<=2;i++){
        cout<<arr[i]<<" ";
    }
}

