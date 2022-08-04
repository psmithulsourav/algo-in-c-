#include<iostream>
#include<iomanip>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
double s1, s2, s3, s, area;
cout<<"Enter the length of 3 sides: ";
cin>>s1>>s2>>s3;
s = (s1+s2+s3)/2;
area = sqrt(s*(s-s1)*(s-s2)*(s-s3));
cout<<"Area = "<<area<<endl;
getch();
return 0;
}
