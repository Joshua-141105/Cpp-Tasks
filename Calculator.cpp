#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;		//Import required libraries
void cal()					//Inittialising calculator function
{
	float num1,num2,num;
	cout<<"Press:\n1 - Addition\n2 - Subraction\n3 - Multiplication\n4 - Division\n5 - Square root\n6 - Cube root\nYour Choice: ";
	int op;						
	cin>>op;					//Initialising operation
	if(op>0&&op<=4)			//Deciding the operation
{
	cout<<"Number 1:";
	cin>>num1;					//User Input
	cout<<"Number 2:";
	cin>>num2;					//User Input
	if(op==1)
	{
		cout<<"Result of "<<" Adding "<<num1<<" and "<<num2<<" is "<<num1+num2;			//Print result
	}
	else if(op==2)
	{
	cout<<"Result of subracting"<<num1<<" from "<<num2<<" is "<<num1-num2;				//Print result
	}
	else if(op==3)
	{
	cout<<"Result of multiplying "<<num1<<" and "<<num2<<" is "<<num1*num2;				//Print result
	}
	else if(op==4)
	{
		float result=num1/num2;
		cout<<"Result of dividing"<<num1<<" by "<<num2<<" is "<<fixed<<setprecision(2)<<result;	//Print result
	}
	cout<<endl;
}
	else if(op==5 || op==6)	//Deciding the operation
	{
		cout<<"Number: ";	//User Input
		float num;
		cin>>num;
		float result;
		if(op==5)
		{
			result=sqrt(num);
			cout<<"Square root of "<<num<<" is "<<fixed<<setprecision(2)<<result;			//Print result
		}
		else
		{
			cout<<"Cube root of "<<num<<" is "<<fixed<<setprecision(2)<<cbrt(num);		//Print result
		}
		cout<<endl;
	}
	else
	{
		cout<<"Invalid Operation chosen\n";				//Print result for invalid choice
	}
}
int main()
{
	int n;
	cout<<"Enter no of calculations to be performed: ";
	cin>>n;					//Input for no of iteration
	while(n>0)
	{
		cal();				//Calling calculator function
		n--;
	}
}
