	             //function for maxima
	#include <iostream>
	using namespace std;

	//declare the function
	//takes 2 para and adds them
	//By Value) Write a program with a function that takes two int parameters, finds the maximum, then returns the maximum

	int fun(int a,int b){int max1;
	    if (a>b){cout<<a;
		max1=a;}
	    else {cout<<b;
				max1=b;}
	    cout<<endl;
	return max1 ;
	}

	//by REFERENCE
	//(By Reference) Goal is the same as above, but this time, the function that finds the maximum should be void, and takes a third, pass by reference parameter; then puts the maximum in that.


	void mind(int a,int b,int &max2){
	 if(a>b){cout<<a;}
			else {cout<<b;}
	}




	//driver function
	//The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the maximum.

	int main(){
	int a,b;
	//get two no.
	cout<<"ENTER TWO NOS.";
	cin>>a>>b;
	cout<<"maximum of two nos.:";

	//SHARE THE A AND B WITH FUN
	fun(a,b);//CALLING THE FUN
	cout<<"again maximum of them :";
	
	//call mind
	int ironman2;
	mind(a,b,ironman2);

	return 0;
	}
