/*	Write a simple program to calculate the electricity bill of the month.
 If the electricity unit is less than 100 then cost of per unit is Rs.7.
  if the consume unit is greater than 100 and less than 200 then cost will be Rs.10 per unit.
 If the consume unit is greater than or equal to 200 and less than 300 then the cost of per unit is 
 Rs.15. If the consume unit is greater than or equal to 300 then the cost will be Rs.25 per unit.*/
#include <iostream>
using namespace std;
int main()
{
float consumed_electricity_units;
cout<<"Enter consummed electricity units:";
cin>>consumed_electricity_units;
if (consumed_electricity_units <100 )
 {
    cout<< "Your electricty bill of the month is:"<<consumed_electricity_units*7;
 }
else 
if((consumed_electricity_units>=100) && (consumed_electricity_units<200))
 {
    cout<<"Your electricty bill of the month is:"<<consumed_electricity_units*10;
 }
else 
if ((consumed_electricity_units>=200) && (consumed_electricity_units<300))
 {
    cout<<"Your electricty bill of the month is:"<<consumed_electricity_units*15;
 }
else
 {
    cout<<"Your electricty bill of the month is:"<<consumed_electricity_units*25;
 }
}

/*
BEGIN
Write "Enter consummed electricity units:"
Read consumed_electricity_units
IF (consumed_electricity_units <100)    Then
Set consumed_electricity_units to consumed_electricity_units *7
Write "Your electricty bill IF the month is:" consumed_electricity_units
ELSE 
IF (consumed_electricity_units >=100) && (consumed_electricity_units <200)   Then
Set consumed_electricity_units to consumed_electricity_units *10
Write "Your electricty bill IF the month is:" consumed_electricity_units
ELSE 
IF (consumed_electricity_units >=200) && (consumed_electricity_units <300)   Then
Set consumed_electricity_units to consumed_electricity_units *15
Write "Your electricty bill IF the month is:" consumed_electricity_units
ELSE
Set consumed_electricity_units to consumed_electricity_units *25
Write "Your electricty bill IF the month is:" consumed_electricity_units
END IF
END
*/