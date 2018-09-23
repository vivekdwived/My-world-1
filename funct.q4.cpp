				//finding minimum using function
	#include <iostream>
	using namespace std;
								////by value
	//(By Value) Write a program with a function that takes two int parameters, finds the min, then returns the minimum.


	int fun1(int a,int b){ 
		int min1;
		if(b<a){min1=b;}
		else {min1=a;}
		cout<<min1<<endl;
		return min1;
	}

						////by reference
	//By Reference) Goal is the same as above, but this time, the function that finds the minimum  of the numbers should be void, and takes a third, pass by reference parameter; then puts the minimum  in that.

	void fun2(int a,int b, int &min2 )
	{ if(b<a){min2=b;}
	  else {min2=a;}
	cout<<min2;
	}

	// The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the minimum.
	//driver function

	int main()
	{
	int a,b,min1,ironman1; 
	//ask user for nos.
	cout<<"enter two nos.";
	cin>>a>>b;
	cout<<"minimum of given nos. is:";
	fun1(a,b);
	
	cout<<"minimum of given nos. is:";
	fun2(a,b,ironman1);
	return 0;
	}








 
