		//taxation via functions


	//library

	#include<iostream>
	using namespace std;

	//make a function to take unit cost , units and tax rate from the user....../ PART A


	void takevalue(char[50] var,float&value)
		{    
			cout<<"enter the amount of "<<var<<endl;
			cin>>value;
		}

	//calculation of tax part B..............

	void find(float UC,float UP,float TR,float&salestax,float&totaltax)
		{ salestax=(UP*UC*TR)/100;
			totaltax=salestax+(UC+UP);
		}

	//DISPLAY FUNCTION to display entered  values..................

	void PRINT(float UC,float UP,float totaltax)
	{
		//CALL BY VALUE .......
		find(UC,UR,TR,salestax,totaltax);
		cout<<"entered unitcost:"<<UC<<endl;
		cout<<"Entered purchase units:"<<UP<<endl;
		cout<<"entered tax rate is:"<<TR<<endl;
		cout<<"your SALES TAX is :"<<salestax<<endl;
		cout<<"your TOTAL TAX is :"<<totaltax<<endl;
	}

	//driver function .......

	int main()
	{ //declare variable ..........

		float UC,UP,TR,salestax,totaltax;

	//get input from user ......
	//CALL BY VALUE..
		takevalue("unit cost",UC);
		takevalue("unit purchase",UP);
		takevalue("tax rate",TR);
	//calL PRINT TO DISPLAY DATA ON SCREEN;
		PRINT(UC,UP,TR,salestax,totaltax);

	return 0;
	}
























