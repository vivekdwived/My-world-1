#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int p,r,t,c; 
cout<<"enter principle amount=";

cin>>p;
cout<<"enter rate=";
cin>>r;
cout<<"enter time period=";
cin>>t;
c= p*pow((1+(r/100),t))-p;
cout<<"compound interest ="<<c;
return 0;}

