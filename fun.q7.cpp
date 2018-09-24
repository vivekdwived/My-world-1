				//QUESTION 7 CONVERTING CASES VIA FUNCTIONS

//library

#include<iostream>
using namespace std;

//PART A FUNCTION THAT CONVERTS  lowercase ------>> upperscase

char toUpper(char a)
{ return a-32;  //returns to uppercase
}

// PART B function that converts UPPER TO ----->>> LOWERCASE

char toLower(char b)
{ return b+32;//converts to lowercase
}

//DRIVER FUNCTON

int main()
{	//declare
char c;

//take letter from user

cout<<"enter an alphasbet  && i shall convert lowercadse to uppercase and vice versa:"<<endl;
cin>>c;
if (c>='A' && c<='Z')    ////check the input...
cout<<toLower(c)<<endl;

else if(a>='a' && a<='z')   //check the input...
cout<<toUppercase<<endl;
else cout<<"entered chacter is not an alphabet";
return 0;
}

