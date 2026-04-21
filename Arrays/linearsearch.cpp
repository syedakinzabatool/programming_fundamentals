#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the size of an Array :";
    cin >> x;
    int n;
    cout<<"Enter no. for search:";
    cin>>n;

    int A[x];
    for (int i = 0; i < x; i++)
    {
        cout << "Enter Number :";
        cin >> A[i];

       if (n==A[x])
        {
            cout<<A[x];
        }
      else
      {
        cout<<"Sorry! number not found.";
      }
    }
    
   {  for (int i=0; i<x; i++ ){
      cout<<A[i]<<endl;
     }
      cout<<endl; 

}
}