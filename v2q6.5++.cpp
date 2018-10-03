	/*Question 2 (Functions): You are a salesperson of Bata shoe company, where each shoe is Rs 225. Company gave you three options for the salary.
	1. Just a salary of Rs 600 per week;
	2. A salary of Rs7.00 per hour plus a 10% commission on sales; (Assume you work 40 hours a week)
	3. No salary, but 20% commissions and Rs20 for each pair of shoes sold
	Write a program to help decide the best choice of compensation. You ask the user for input (Write a function for this). Then write other functions for each of the options. Write a driver program to use the 4 functions and decide the best option for yourself. (Of course, the weekly sales - the number of shoes sold per week has to be given by the user) */

	//library
	#include <iostream>
	using namespace std;

	/*we need 4 functions 
	1.to get no of sales in that week from user
	2.to express income by method of 10% commission
	3.to express income by method of 20% commission.
	4 to tell the BEST OR MAXIMUM INCOME.		*/

	//function 1.

	int GETit(int sales)
	{	cout<<"HEY !! USER please enter the no of sales in that week:"<<endl;
		cin>>sales;
		return sales;
	}

	//FUNCTIION 2
	int  comm10(float income1)
	{	int sales;
		income1=140+(sales*22.5);
		cout<<"income using 10% commission method="<<income1<<endl;
		return income1;
	}

	//FUNCTION 3
	int comm20(float income2)
	{	int sales;
		income2=(sales*20)+(sales*22.5);
		cout <<" income using method of 20% commision is="<<income2<<endl;
		return income2;
	}

	//FUNCTION 4
	void compare(float income1,float income2)
	{	
           //call above functions to get values of income1 &&&&&& income2
               comm10(income1);
               comm20(income2);    
			if(income1>=600)
			{ if(income1>=income2)
			  cout<<"best option is 10% commission method"<<endl;
			}
		
		else if (income2>=600)
			{cout <<"best option is 20% commission method"<<endl;}
		else 
                 cout<<"best method is to TAKE Rs.600 per week"<<endl;
	}

	//DRIVER SAAHAB FUCTION..............HAHAHAHAHAHAHAHAHAHAHAHAHAHAHAAAA...
	int main()
	{  int sales;
	   float income1,income2;

	///\call EACH FUNCTION LINE BY LINE &&& ONE BY ONE TO DO ITS JOBS...STEVEN  JOBS

	GETit(sales);
	comm10(income1);
	comm20(income2);
	compare(income1,income2);


	return 0;
	}

























