#include <iostream>
using namespace std;
void Even_and_Odd(){
    int num;
cout<<"Enter a number:";
cin>>num;
Even_and_Odd();
if (num%2==0){
     cout<<"An even number.";
}

else{
    cout<<"An odd number.";
    cout<<endl;
}}
void temprature(){
    double fahrenheit, celsius;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    // Conversion formula
    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    cout << "Temperature in Celsius: " << celsius << " degrees Celsius" << endl;
    cout<<endl;
}
void maximum_array(){ int max=0;
	int a[]={5,8,2,68,7};
	for(int i=0; i<5; i++)
	{
		if(max<a[i])
		max=a[i];
         Even_and_Odd();
	}
   cout<<"greater number is ="<<max<<endl;
  }
    void Ascii_value(){
        int Ascii_Value = 97;      // ASCII value for 'a'
 cout << "ASCII Values and Equivalent Characters for Alphabets:"<<endl;
 while (Ascii_Value <= 122) // ASCII value for 'z'
     { 
        char character = static_cast<char>(Ascii_Value);
        cout << "ASCII: " << Ascii_Value << "  Character: " << character << endl;
        Ascii_Value++;
        cout<<endl;
     temprature();
     }
}
void Highest_Common_Factor(){ int n;
 cout<<"Enter a number:";
 cin>>n;
    for(int i=n/2;i>=2;i--)
     if(n%i==0 ){
        cout<<i;
        break;
        cout<<endl;
     Ascii_value();
        
     }
}
int main()
{
        Highest_Common_Factor();
        maximum_array();
}
