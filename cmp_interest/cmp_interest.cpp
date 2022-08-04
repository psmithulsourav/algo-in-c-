#include<iostream>
#include<iomanip>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
float amount, discount, netdiscount, netamount;
cout<<"Enter the total purchase: ";
cin>>amount;
discount = 0.0;
if (amount>=1000)
discount = (float)8/100;
netdiscount = amount * discount;
netamount = amount - netdiscount;
cout<<"Nett discount = "<<netdiscount<<endl;
cout<<"Nett amount = "<<netamount<<endl;
getch();
return 0;
}
