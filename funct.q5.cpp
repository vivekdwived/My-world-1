			//all programs 234
#include<iostream>
using namespace std;

//function 2 addition of nos;

void fun2(int a,int b){
int sum=a+b;
cout<<"sum of given nos.="<<sum<<endl;
}

//function 3 maximum

void fun3(int a,int b)
{
if(a>=b){cout<<"maximum of given nos."<< a;}
else {cout<<"maximum of given nos."<<b;}
cout<<endl;
}

//function 4 minimum

void  fun4(int a,int b)
{
if (a<=b){cout<<"manimum of given nos. is :"<<a;}
else {cout<<"minimum of given nos. is:"<<b;}
}

//driver function

int main()
{ int m,n,x;
//GET NOS.
cout<<"enter 1st no.:";
cin>>m;
cout<<"enter 2nd no.:";
cin>>n;

//ASK INSTRUCTIONS

cout<<"enter the serial no. of operation you would like to carry out"<<endl<<"finding sum press-1 "<<endl
<<"finding maximum press-2"<<endl<<"finding minimum-press-3"<<endl;


cin>>x;

if(x==1){
fun2(m,n);
}

if(x==2){
fun3(m,n);
}

if(x==3) {
fun4(m,n);
}

return 0;
}











