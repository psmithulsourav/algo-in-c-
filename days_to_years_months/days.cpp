#include<iostream>
#include<iomanip>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
int totaldays, days, months, years;
cout<<"Enter the total days: ";
cin>>totaldays;
years = totaldays/365;
totaldays = totaldays%365;
months = totaldays/30;
days = totaldays%30;
cout<<"Days = "<<days<<endl;
cout<<"Months = "<<months<<endl;
cout<<"Years = "<<years<<endl;
getch();
return 0;
}
