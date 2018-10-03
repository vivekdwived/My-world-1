//QUESTION 6 SUM OF EVEN ODD &&& THEIR SQUARES


	//library

	#include<iostream>
	using namespace std;

	//FUNCTION TO CALCULATE SUM OF EVEN NUMBERS.....................................

	int sumEvenNumber(int a,int b)
	{	int sumeven;
		sumeven = 0;
		
		for (int j=a;j<b;j++)
		  { if(j%2==0) sumeven=sumeven+j;}
		    return sumeven;   		
	}


	//part b SUM OF ALL ODD NUMBERS.............................................

	int sumOddNumbers(int a,int b)
	{	int addsum;
		for (int i=a; i<=b;i++)
		{ if(i%2!=0)
		{addsum=addsum+i;}
		}
	return addsum;
	}

	//PART C adding even SQUARES...............................................

	int sumSquareEvenNumbers(int a,int b)
	{	int evensquare;
		for(int i=a;i<=b;i++)
		{ if(i%2==0 )
		{ evensquare=evensquare+(i*i);}
		}
	return evensquare;
	}

	//PART D adding odd squares....................................................
	

	int sumSquareOddNumbers(int a,int b)
	{	int oddsquare;
		for(int j=0;j<=b;j++)
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

	sumEvenNumber(a,b);
	sumOddNumbers(a,b);
	sumSquareEvenNumbers(a,b);
	sumSquareOddNumbers(a,b);

	cout<<"the sum of all even numbers between "<< a <<" and "<<b<<" is: "<< sumeven <<endl;
	cout<<"the sum of all odd numbers between "<< a <<" and "<<b<<" is: "<< sumodd <<endl;
	cout<<"the sum of all squares of even numbers between "<<a<<" and "<<b<<" is: "<< evensquare <<endl;
	cout<<"the sum of all squares of odd numbers between "<<a<<" and "<<b<<" is: "<< oddsquare <<endl;

	return 0;
	}






