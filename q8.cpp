#include<iostream>
using namespace std;
int main()
{ int a,b,c,d,e,f,g,h;
cout<<"enter marks of 5 subjects=";
cin>>a;
cin>>b;
cin>>c;
cin>>d;
cin>>e;
f=(a+b+c+d+e);
g=f/5;
h=g;  //if total marks =500 then average = percentage
cout<<"total marks="<< f<<endl;
cout<<"average marks ="<<g<<endl;
cout<<"percentage="<<h<<"%";
return 0;}


