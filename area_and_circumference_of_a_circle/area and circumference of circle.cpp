#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int radius;
float area,circum,pi;
pi = 3.14;
cout<<"This program finds the area and circumference of a circle";
cout<<"\nEnter  the value of radius : ";
cin>>radius;
area = pi*radius*radius;
circum = 2*pi*radius;
cout<<"The area of circle is : "<<area<<"\nThe circumference is : "<<circum;
getch();
return 0;
}
