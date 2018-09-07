		//RIGHT STAR TRIANGLE
	#include<iostream>
	using namespace std;
	int main()
	{//declare
	 int n;
	//get a no.
	cout<<"enter base length of the triangle i shall print an isosceles rigth angled triangle:";
	cin >>n;
	for (int i=0;i<n;i++)
			//PRINT I+1 STARS
		{ for(int j=0;j<i+1;j++)
				{cout<<"*";}
				cout<<endl;
							
		}	
	return 0;
	}
