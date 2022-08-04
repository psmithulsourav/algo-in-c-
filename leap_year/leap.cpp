#include<iostream>
#include<iomanip>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
int year;
cout<< "Enter the year: ";
cin>> year;
if ( year%4 == 0 && year%100!= 0 || year%400 == 0 )
cout<<"It is a leap year"<<endl;
else
cout<<"It is not leap year"<<endl;
getch();
return 0;
}
