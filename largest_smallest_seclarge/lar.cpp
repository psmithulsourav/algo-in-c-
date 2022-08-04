#include<iostream>
#include<iomanip>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
int a, b, c, largest, seclargest, smallest;
cout<<"Enter three numbers: ";
cin>>a>>b>>c;
largest = a;
if (b>largest)
largest = b;
if (c>largest)
largest = c;
smallest = a;
if (b<smallest)
smallest = b;
if (c<smallest)
smallest = c;
seclargest = (a+b+c)-( largest+ smallest);
cout<<"Smallest = "<<smallest<<endl;
cout<<"Second largest = "<<seclargest<<endl;
cout<<"Largest = "<<largest<<endl;
getch();
return 0;
}
