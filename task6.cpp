#include<iostream>
#include<cmath>
using namespace std;

void tens(int number1);
void ones(int number1);

main()
{

	system("cls");
	int input, n2=1;
	int oneDigit;
	cout << "Enter a number between 1-99(except 11-19)=> ";
	cin >> input;
	
	if(input<=10)
	{
		oneDigit=1;
	}
	if(input>19)
	{
		oneDigit=0;
	}
	if(oneDigit==0)
	{
		n2 = input / 10;
		input = input % 10;		
	}
	
	tens(n2);
	ones(input);
	
	cout << endl;

}

void tens(int number1)
{

	if(number1==2)
	{
		cout << "twenty ";
	}
	if(number1==3)
	{
		cout << "thirty ";
	}
	if(number1==4)
	{
		cout << "fourty ";
	}
	if(number1==5)
	{
		cout << "fifty ";
	}
	if(number1==6)
	{
		cout << "sixty ";
	}
	if(number1==7)
	{
		cout << "seventy ";
	}
	if(number1==8)
	{
		cout << "eighty ";
	}
	if(number1==9)
	{
		cout << "ninety ";
	}

}

void ones(int number2)
{

	if(number2==1)
	{
		cout << "one";
	}
	if(number2==2)
	{
		cout << "two";
	}
	if(number2==3)
	{
		cout << "three";
	}
	if(number2==4)
	{
		cout << "four";
	}
	if(number2==5)
	{
		cout << "five";
	}
	if(number2==6)
	{
		cout << "six";
	}
	if(number2==7)
	{
		cout << "seven";
	}
	if(number2==8)
	{
		cout << "eight";
	}
	if(number2==9)
	{
		cout << "nine";
	}
	if(number2==10)
	{
		cout << "ten";
	}

	
}