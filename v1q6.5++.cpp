//Question 1 (Loops): Apples cost Re1 each, mangoes cost Rs3 each, and 1 banana is only Rs0.50. You bought 100 fruits for Rs100, How many of each fruit did you buy? Display all variations of answer. 

	//library
	#include <iostream>
	using namespace std;

	int main()
	{ 
	/*a= no of apples
	m= no of mango
	b= no of banana


	solving mathematical equations
	a + m + b =100
	a + 3m + b/2 =100
	we get 
	b=4m
	a=100-5m
	m= 0,1,2,3,4,5,6...........as a>=0 therefore m<=20

	*/
	int a, m,b ;
	//use FOR LOOP...

	for (m=0;m<=20;m++)
	{	b=4*m,a=100-5*m;
		cout<<"required possibilities are:"<<m<<"mangoes,"<<a<<"apples and"<<b<<"bananas."<<endl;

	}
	return 0;
	}
