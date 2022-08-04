#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int a,b;
cout<<"Enter the first number : ";
cin>>a;
cout<<"Enter the second number : ";
cin>>b;
a =a + b;
b = a - b;
a = a - b;

cout<<"The first number after interchanging : "<<a;
cout<<"\nThe second number after interchanging : "<<b;
getch();
return 0;
}
