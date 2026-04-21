//Print elements of index in Ascending order ....

#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number of elements in an Array :";
    cin >> x;
    cout << "-----------------------------------------------" << endl;
    int A[x];
    for (int i = 0; i < x; i++)
    {
        cout << "Enter Number :";
        cin >> A[i];
    }
    for (int i = 0 ; i < x-1; i++)     //1st index will b compared with the all of the elements by jth loop           
    {
        for (int j = i + 1; j < x; j++)
        {                                       //L>R
            if (A[i] > A[j])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    cout<<"Sorted array is:";
    for (int i = 0; i < x; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    cout<<"Second largest element is:";
    cout<<A[x-2];
   
}
