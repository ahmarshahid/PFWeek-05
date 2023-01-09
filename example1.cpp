#include <iostream>
using namespace std;

int isGreater(int number1 , int number2);
int isMinimum(int number1 , int number2);

main()
{
int number1;
int number2;
int result;
int result2;

cout << " Enter number1 : "<<endl;
cin >> number1;
cout << " Enter number2 : "<<endl;
cin >> number2;
result = isGreater(number1 ,number2);
cout << " The greater number is :" << result <<endl;

result2 = isSmaller(number1 ,number2);
cout << " The smaller number is :" << result2 <<endl;
}


int isGreater (int num1, int num2)
{
if (num1 > num2)
{
return num1;
}
if(num1 < num2)
{
return num2;
}
}

int isSmaller (int num1, int num2)
{
if (num1 > num2)
{
return num2;
}
if(num1 < num2)
{
return num1;
}
}