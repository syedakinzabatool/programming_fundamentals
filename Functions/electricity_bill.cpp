/*	Write a simple program to calculate the electricity bill of the month.
 If the electricity unit is less than 100 then cost of per unit is Rs.7.
  if the consume unit is greater than 100 and less than 200 then cost will be Rs.10 per unit.
 If the consume unit is greater than or equal to 200 and less than 300 then the cost of per unit is 
 Rs.15. If the consume unit is greater than or equal to 300 then the cost will be Rs.25 per unit.*/
#include <iostream>
using namespace std;
void first_condition();
void  second_condition();
void third_condition();
void fourth_condition();
int main()
{
float consumed_electricity_units;
cout<<"Enter consummed electricity units:";
cin>>consumed_electricity_units;
void first_condition();{
 cout<< "Your electricty bill of the month is:"<<consumed_electricity_units*7;
 return 0;
}
void  second_condition();{
  cout<<"Your electricty bill of the month is:"<<consumed_electricity_units*15;
  return 0;
}
void third_condition();{
   cout<<"Your electricty bill of the month is:"<<consumed_electricity_units*10;
   return 0;
}
void fourth_condition();{
    cout<<"Your electricty bill of the month is:"<<consumed_electricity_units*25;
    return 0;
}
if (consumed_electricity_units <100 )
 { first_condition();}
else if((consumed_electricity_units>=100) && (consumed_electricity_units<200))
 { second_condition();}
else if ((consumed_electricity_units>=200) && (consumed_electricity_units<300))
 { third_condition();}
else
 { fourth_condition();}
}

