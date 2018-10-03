//QUESTION 6 SUM OF EVEN ODD &&& THEIR SQUARES


	//library

	#include<iostream>
	using namespace std;

	//FUNCTION TO CALCULATE SUM OF EVEN NUMBERS.....................................

	int sumEvenNumber(int a,int b)
	{	int sumeven;
		sumeven=0;
		
		for (int j=a+1;j<b;j++)
		{   if(j%2==0) 
			{sumeven=sumeven+j;}
		}	
		return sumeven;

	}


	//part b SUM OF ALL ODD NUMBERS.............................................

	int sumOddNumbers(int a,int b)
	{	int addsum;
		addsum=0;
		for (int i=a+1; i<b;i++)
		{ if(i%2!=0)
		{addsum=addsum+i;}
		}
	return addsum;
	}

	//PART C adding even SQUARES...............................................

	int sumSquareEvenNumbers(int a,int b)
	{	int evensquare;
		evensquare=0;
		for(int i=a+1;i<b;i++)
		{ if(i%2==0 )
		{ evensquare=evensquare+(i*i);}
		}
	return evensquare;
	}

	//PART D adding odd squares....................................................
	

	int sumSquareOddNumbers(int a,int b)
	{	int oddsquare;
		oddsquare=0;
		for(int j=a+1;j<b;j++)
		{ if(j%2!=0)
		{oddsquare=oddsquare+(j*j);}
		}
	return oddsquare;
	}




	//.............DRIVER FUNCTION.................................................

	int main()
	{ //declare
	int a,b,sumeven,sumodd,evensquare,oddsquare;
	
	//get NUMBERS FROM USER

	cout<< "enter the 1st integer :"<<endl;
	cin >> a;
	cout<<"enter the 2nd integer:"<<endl;
	cin >> b;

	//CALLING ALL PREVIOUS FUNCTIONS BY VALUE

	int c=sumEvenNumber(a,b);
	int d= sumOddNumbers(a,b);
	int e= sumSquareEvenNumbers(a,b);
	int f=sumSquareOddNumbers(a,b);

	cout<<"the sum of all even numbers between "<< a <<" and "<<b<<" is: "<<c<<endl;
	cout<<"the sum of all odd numbers between "<< a <<" and "<<b<<" is: "<<d <<endl;
	cout<<"the sum of all squares of even numbers between "<<a<<" and "<<b<<" is: "<< e <<endl;
	cout<<"the sum of all squares of odd numbers between "<<a<<" and "<<b<<" is: "<< f<<endl;

	return 0;
	}




