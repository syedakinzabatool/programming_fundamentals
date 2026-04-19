//Develop a C++ program that simulates a grading system. 
//Given a student's score, determine and display the corresponding grade (A, B, C, D, or F).
# include <iostream>
using namespace std;
int main()
{
int marks;
cin>>marks; //Grades are A,B,C,D,F.
if(marks>90)
{
    cout<<'A';
}
else 
if(marks>=70 && marks<=80)
{
    cout<<'B';
}
else 
if(marks>=60 && marks<=70)
{
    cout<<'C';
}
else 
if(marks>=50 && marks<=60)
{
    cout<<'D';
}
else
{
    cout<<" F a gya hy ! Beta Prh ly";
}
}

    
