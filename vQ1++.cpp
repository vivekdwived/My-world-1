//taxation via functions


	//library

	#include<iostream>
	#include<string>
	using namespace std;

	//make a function to take unit cost , units and tax rate from the user....../ PART A


	void takevalue(string var,int &value)
		{    
			cout<< "enter the amount of " << var <<endl;
			cin >> value;
		}

	//calculation of tax part B..................................................................................................

	void find(int UC,int UP,int TR,int &salestax,int &totaltax)
		{ salestax=(UP*UC*TR)/100;
		  
		  totaltax = salestax+(UC*UP);
		}

	//DISPLAY FUNCTION to display entered  values...........................................................................................

	void PRINT(int UC,int UP,int &totaltax, int TR, int &salestax)
	{	
		//CALL BY VALUE .......

		takevalue("unit cost",UC);
		takevalue("unit purchase",UP);
		takevalue("tax rate",TR);

		find(UC,UP,TR,salestax,totaltax);
		cout <<"entered unitcost:"<< UC << endl;
		cout <<"Entered purchase units:"<< UP << endl;
		cout <<"entered tax rate is:"<< TR << endl;
		cout <<"your SALES TAX is :"<< salestax << endl;
		cout <<"your TOTAL TAX is :"<< totaltax << endl;
	}

	//driver function ......................................................................................................................

	int main()
	{ //declare variable ..........

		int UC,UP,TR,salestax,totaltax;

	//calL PRINT TO DISPLAY DATA ON SCREEN;
		PRINT(UC,UP,TR,salestax,totaltax);

	return 0;
	}





