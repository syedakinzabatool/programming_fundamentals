 #include <iostream>
using namespace std;
void print(int A[], int x){
cout<<"The elements of an array are:\n";
for (int i=0;i<x;i++){
    cout<<A[i]<<" ";
}
}
void Sorted_array(int A[],int x){
   
  for(int i=x-1; i>=0;i--){
    for(int j=0;j<x;j++){
        if ( A[j]>A[j+1]){
            int temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
        }
    }
  }
cout<<"\nThe  sorted array is:";
for (int i=0;i<x;i++){
    cout<<A[i]<<" ";
}
}
void search(int A[],int x){
    int key;
    cout << "Enter a number you want to search: ";
    cin >> key;
    int low, high, var, mid;
    for(int i=0;i<x;i++){
    low = 0;
    high = x - 1;
    var = -1;

    while (low <= high) {
        mid = (low + high) / 2;
       
        if (A[mid] == key) {
            var = mid;
            break; // Exit the loop if the element is found
        } else if (key < A[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    }
    if (var == -1) {
        cout << "Not found.";
    } else {
        cout << "Found at index " << var<<endl;
    }
}

int main(){
int size;
cout<<"Enter the size of array:";

cin>>size;
int A[size];
cout<<"\nEnter the elements of an array:";
for (int i=0;i<size;i++){
    cin>>A[i];
} 
print(A,size);
Sorted_array(A,size);
search(A,size);

}