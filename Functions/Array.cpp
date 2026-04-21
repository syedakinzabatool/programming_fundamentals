#include <iostream>
using namespace std;

int Incremented_Array(int B[]){
for (int i = 0; i < 5; i++)
return i++;
}

int Decremented_Array(int B[]){
for (int i = 0; i < 5; i++)
return i-2;
}
int main()
{
    
    int A[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        cout << "Enter Number for Array :";
        cin >> A[i];

    Incremented_Array(A);
    Decremented_Array(A); 
    
    }
         cout << "Incremented Array";
          for (i = 0; i < 5; i++){
         cout<< Incremented_Array(A);
          }
        cout <<endl<< "Decremented Array";
         for (i = 0; i < 5; i++){
        cout<< Decremented_Array(A); 
}}