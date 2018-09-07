//hollow rhombus
#include<iostream>
using namespace std;
//main function
int main()
{	//declare
	int n;
	//get a no.
	cout<<"enter a no. and i shall show you a hollow rhombus of that size: ";
	cin>>n;
	//print stars
	//print spaces
	//print stars
	
	// First row 
	for (int i=0;i<n-1;i++) {cout<<" ";};
	for (int i=0;i<n+1;i++) {cout<<"*";} ;
	cout<<endl;
	// Middle rows
	for (int j=1;j<n;j++)
	 { 
		//PRINT SPACES#
		for (int i=1;i<n-j;i++) {cout<<" ";} 
		// Print star
		cout<<"*";		
		// Print spaces
		for (int v=0;v<n-1;v++) {cout<<" ";}
		// Print star
		cout<<"*";
		// Go to the next line
		cout << endl;
	}
	// For last row
	for (int i=0;i<n;i++) cout<<"*";
	return 0;
}
