#include <iostream>
using namespace std;
int main()
{

//Area of a Circle:

float radius;
cout<<"Enter radius of a circle:";
cin>>radius;
float pi=3.14;
float area1 =radius*radius*pi;
cout<<"Area of circle is:"<<endl;

//Area of Triangle:

float base;
cout<<"Enter base:";
cin>>base;
float height;
cout<<"Enter height";
cin>>height;
float area2 =0.5*base*height;
cout<<"Area of Triangle is:"<<endl;

//Area of Rectangle:

float width;
cout<<"Enter width:";
cin>>width;
float length;
cout<<"length:";
cin>>length;
float area3=length*width;
cout<<"Area of Rectangle is:"<<endl;

string shape;
cout<<"Enter Required Shape:";
cin>>shape;
if (shape=="Circle")
{
    cout<<area1;
}
else 
    if(shape=="Triangle")
{
    cout<<area2;
    }
else
    if(shape=="Rectangle")
    {
        cout<<area3;
    }
else
{
    cout<<"Invalid";
}
}
