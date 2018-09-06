		//hollow square pattern
#include<iostream>
using namespace std;
	//MAIN function
int main()

{ //declare
int i,j,n;
//get a no.
		cout<<"enter a no. i shall create a hollow square of same size :"<<endl;
		cin>>n;
//use loop
//print star	
			for (i=0;i<n;i++){
				cout<<"*";
					}cout<<endl;
	for (i=0;i<n-2;i++)		{	cout<<"*";
				for (j=0;j<n-2;j++){ cout<<" ";}
				cout<<"*"<<endl;
				}

for (i=0;i<n;i++){
				cout<<"*";
					}cout<<endl;


		
//print space
//print star
			
return 0;
}

