		// SAYS TO YEARS AND WEEK

//library 
#include<iostream>
using namespace std;
 	//main function 
	//compilation starts here
 int main ()
		{ /*get the no. of says 
			divide by 7 to get in weeks 
			& divide by 365 to in years EXCEPT LEAP YEAR*/
 
		//declare later

		int d;
		float w;
		double y,a,b,c;
		
		cout<<"enter no. of days:";
		cin >>d;
		w=d/7;
		y=d/365;
		a=d%7;
		b=d%365;
		c=b/7;
		cout<<"CONVERSION TO WEEK and days="<<w<<"week(s) +"<<a<<"days"<<endl<<"CONVERSION TO YEARS ="<<y<<"years and"<<b<<"days and"<<c<<"weeks";
return 0;}

