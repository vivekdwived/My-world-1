					//q2 by value addition
	#include<iostream>
	using namespace std;


	//define required function to use 2 values of int main
	//(By Value) Write a program with a function that takes two int parameters, adds them together, then returns the sum

	int fun1(int a,int b){int sum;
	sum=a+b;
	return sum;}

	//////////////////////////////////////////////////////////////////////
		//by reference


	//define required function to use 2 values of int main
	//(By Reference) Goal is the same as above, but this time, the function that adds the numbers should be void, and takes a third, pass by reference parameter; then puts the sum in that.

	void fun2(int a,int b,int &c,int sumagain){
	c=a*b;
	sumagain=a+b;
	}


	 

	//DRIVER FUNCTION TO GET INPUT AND SHARE WITH FUNCT
	int main(){ 
    int a,b;
	//get 2 nos.
	cout<<"enter 2 nos.";
	cin>>a>>b;
	int sum,product;
	cout<<fun1(a,b)<<endl;
	//share inputs with funct
	//func2(a,b,sum);

	//print output sum
	fun2(a,b,product,sum);
    cout<<product<<endl<<sum;


	return 0;
	}
	//////////////////////////////////////////////////////////////////////



