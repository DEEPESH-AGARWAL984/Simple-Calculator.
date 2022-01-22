//WAP TO MAKE SIMPLE CALCULATOR USING SWITCH CASE.
#include<iostream>
using namespace std;

int main(){
	int choice;
	cout<<"\t----Simple Calculator----";
	cout<<"\n\t1.Addition.";
	cout<<"\t\t2.Subtraction.";
	cout<<"\n\t3.Multiplication.";
	cout<<"\t4.Division.";
	cout<<"\n\t5.Increament Operator. ";
	cout<<"\t6.Decreament Operator.";
	float a,b,x,y,z,p,q,r;
	while(1){
		cout<<"\n\n\tEnter your choice: ";
		cin>>choice;
		
		switch(choice){
			case 1:
				cout<<"\tEnter the two numbers: ";
				cin>>a>>b;
				x = a + b; //Addition Of Two Numbers.
				cout<<"\n\tAddition Of Two Numbers: "<<x;
			break;
			
			case 2: 
				cout<<"\tEnter the two numbers: ";
				cin>>a>>b;
				y = a - b; //Subtraction Of Two Numbers.
				cout<<"\n\tSubtraction Of Two Numbers: "<<y;
			
			break;
			
			case 3: 
				cout<<"\tEnter the two numbers: ";
				cin>>a>>b;
				p = a * b; //Multiplication Of Two Numbers.
				cout<<"\n\tMultiplication Of Two Numbers: "<<p;
			break;	
			
			case 4: 
				cout<<"\tEnter the two numbers: ";
				cin>>a>>b;
				z = a / b; //Subtraction Of Two Numbers.
				cout<<"\n\tDivision Of Two Numbers: "<<z;
			break;
			
			case 5:
				cout<<"\tEnter the number: ";
				cin>>q;
				cout<<"\n\tPost Increament Of Entered Number: "<<q++; // post - increament operation.
				cout<<"\n\tPre Increament Of Entered Number: "<<++q; // Pre - increament operation.
			break;
			
			case 6:
				cout<<"\tEnter the number: ";
				cin>>r;
				cout<<"\n\tPost Decreament Of Entered Number: "<<r--; // post - Decreament operation.
				cout<<"\n\tPre Decreament Of Entered Number: "<<--r; // Pre - Decreament operation.
				break;
			default:
				cout<<"\n\tInvalid Choice.";
			break;	
		}
	}
}
