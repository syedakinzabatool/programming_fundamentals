//find the subarray
#include <iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter the size and elements of an Array : ";
    cin >> x;
    cout << "________________________________________" << endl;
    int A[x];
    for (int i = 0; i < x; i++) 
    {
        cout << "Enter Number : ";
        cin >> A[i];
    }
    //printing subarray
   for(int start=0;start<x;start++)
   {
       for(int end=start;end<x;end++)
       {
        //print the elements in the range from start to end
           for(int elements=start;elements<=end;elements++)
           {
            cout<<A[elements]<<" ";
           }
           cout<<endl;
       }
       cout<<endl;
   }
    
    return 0;
}