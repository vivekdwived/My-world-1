	//PROGRAM FOR UNIT (LENGTH) CONVERSION

//library
#include<iostream>
using namespace std;


//main function
//compilation starts here

int main()
	{
 	//declare at last
double a,km,m;
	
	/* get a no.
	then divide by 100 to convert into cm 		
	AND  divide by 1000 to convert into m*/


	

	cout<<"enter a no. (in cm):"<<endl;
	
	cin>>a;
				
 	m=a/100;
	km=a/100000;

	
	cout<<"GIVEN no. in meter and km. is respectively:"<<m<<"m  "<<"and"<<endl<<km<<"km"<<endl;


return 0;
}
