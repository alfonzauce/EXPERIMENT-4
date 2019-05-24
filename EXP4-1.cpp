//Write a C++ program using functions that will display the calculator menu.
//The program will prompt the user to choose the operation choice (from 1 to 5). 
//Then it asks the user to input two integer vales for the calculation.
//See the sample below. 
//MENU:           1. Add            2. Subtract            3. Multiply            4. Divide            5. Modulus  
//Enter your choice: 1  Enter your two numbers: 12 15  Result: 27     Continue? y    
//The program also asks the user to decide whether he/she wants to continue the operation.
//If he/she input ‘y’, the program will prompt the user to choose the operation gain. 
//Otherwise, the program will terminate. 
#include<iostream>
#include<string>
using namespace std;


	void addition()
	{
		int a,b,sum;

		cout << " Enter your two numbers: "; cin >> a; cin >> b; cout << "\n";
		
		sum = a + b;
		cout << a << " + " << b << " = " << sum << "\n";
		return;
	}
	
	void subtraction()
	{
		int a,b,diff;

	cout << " Enter your two numbers: "; cin >> a; cin >> b; cout << "\n";
		
		diff = a - b;
		cout << a << " - " << b << " = " << diff << "\n";
		return;			
	}
	
	void multiplication()
	{
		int a,b,product;

		cout << " Enter your two numbers: "; cin >> a; cin >> b; cout << "\n";
		
		product = a * b;
		cout << a << " * " << b << " = " << product << "\n";
		return;
	}
	
	void division()
	{
		int a,b,quo;

	cout << " Enter your two numbers: "; cin >> a; cin >> b; cout << "\n";
		
		quo = a / b;
		cout << a << " / " << b << " = " << quo << "\n";
		return;
	}
	
	int modulu()
	{
		int a,b,mod;

		cout << " Enter your two numbers: "; cin >> a; cin >> b; cout << "\n";
		
		mod = a % b;
		cout << a << " % " << b << " = " << mod << "\n";
		return 0;
	}
	

	
	int main()
	{
	
		int mode;
		char cnt;
		
	do{
		
		cout << " MENU:\n 1- add\n 2- subtract\n 3- multiply\n 4- divide\n 5- modulus\n ";
		cout << " Enter your choice: "; cin >> mode; cout << "\n";
		
		switch(mode)
		{
			case 1:
			{	
			addition();
			break;
			}
		
			case 2:
			{
			subtraction();
			break;	
			}
		
			case 3:
			{
				
			multiplication();
			break;	
			}
		
			case 4:
			{
				
			division();
			break;	
			}
		
			case 5:
			{
			modulu();
			break;
			}
			
			default:
				cout << " ONLY CHOOSE FROM 1- 5";
		}
		
		cout << " Type y to continue: ";
		cin >> cnt;
		cout << "\n";
		
	} while (cnt == 'y' || cnt=='Y'); 
		
		
		return 0;
	}
