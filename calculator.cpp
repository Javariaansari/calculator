#include <iostream>
using namespace std;
int main(){

int javaria1;
int javaria2;
int result;
	char operation;
	
	cout<< "please enter first number";
	cin>> javaria1;
	cout<< "please enter second number";
	cin>> javaria2;
	cout<< "please enter the operation you want to perform (+,-,*,/)";
	cin>>operation;
	bool validOperation = true;
	switch (operation){
		case'+':
			result=javaria1+javaria2;
			break;
			
				case'-':
			result=javaria1-javaria2;
			break;
			
				case'*':
			result=javaria1*javaria2;
			break;
			
				case'/':
			if (javaria2==0){
				cout<<"Error:Division by zero." <<endl;
				return 1;
			}
			result= javaria1/javaria2;
			break;
			default:
				validOperation = false; //Invalid Operation
				break;
	}
	if(validOperation){
		cout<<"Result:" <<result << endl;
	}else{
		cout<<"you entered an invalid operation."<<endl;
	}return 0;
}

	
	
