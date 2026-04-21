/*#include <iostream>
using namespace std;
int main()
  {
   int A[5];
   cin>>A[0]>>A[1]>>A[2]>>A[3]>>A[4];
   cout<<A[0]<<A[1]<<A[2]<<A[3]<<A[4];
  }*/
 /* #include <iostream>
using namespace std;
int main()
{
    
    int A[5]={7,2,5,8,1};
    int x;
    int K[x]={};
    for (int i =4; i>=0 ; i--)
    {
        K[x]=A[i];
        cout << K[x] << " ";
    }
    cout << endl;
}*/
 #include <iostream>
using namespace std;
int main()
{
    int A[5]={7,2,5,8,1};
    int i,j;
    int K[i];
    for (i=0,j=4;i<=4,j>=0 ;i++,j--)
    {
        K[i]= A[j];
    }
    for (int i=0; i<4; i++){
        cout << K[i] << " ";
    }
    cout << endl;
}