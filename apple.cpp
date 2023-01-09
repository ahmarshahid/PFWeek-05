#include <iostream>
using namespace std;
int add (int number1, int number2);
float divide ( float number1, float number2);



main(){


int number1;
int number2;
int result;
float result2;   


 result = add (12, 24);
cout << " The sum is :" << result<<endl;

result2 = divide (12, 24);
cout << " The divide is :" << result2 <<endl;

}

int add ( int number1, int number2)
{
int sum= number1 + number2;
return sum;

}

float divide ( float number1, float number2)
{
float divide = number1 / number2;
return divide;
}