		//the great RHOMBUS
#include<iostream>
using namespace std;
	// MAIN FUNCTION
int main()
{	int i,n;
	//ask for a no.
	cout<<"enter a no. i shall show you a starred rhombus of same size:";
	cin>>n;
	for (int j=1;j<n;j++)
		 {for(i=0;i<n-j;i++){cout<<" ";}
				for (i=0;i<n;i++){cout<<"*";}cout<<endl;
	
		}

	for (i=0;i<n;i++){cout<<"*";}cout<<endl;
return 0;
}
