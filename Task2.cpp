#include <iostream>
#include <cmath>
using namespace std;
float quadraticplus(float number1, float number2, float number3);
float quadraticneg(float number1, float number2, float number3);


main()
{
 int a = 5;
 int b = 6;
 int c = 1;
 float divide;
 float divide1;
 divide = quadraticplus(5, 6 , 1);
 divide1 = quadraticneg(5, 6 , 1);
 cout << "The the value of x is :"<< divide <<endl;
 cout << "The the value of x is :"<< divide1 <<endl;
 
 
}


float quadraticplus(float number1, float number2, float number3)
{
 int a = 5;
 int b = 6;
 int c = 1;
 float square;
 float multiple;
 float diff;
 float root;
float product;
float minusb;
float sum1;
float divide;

square = pow(b ,2);
multiple = 4 * a * c;
diff = square - multiple;
root = sqrt(diff);
product = 2 * a;
minusb = -1 * b;
sum1 = minusb + root;
divide = sum1 / product;
return divide;

}
float quadraticneg(float number1, float number2, float number3)
{
 int a = 5;
 int b = 6;
 int c = 1;
 float square;
 float multiple;
 float diff;
 float root;
float product;
float minusb;
float sum1;
float divide1;

square = pow(b ,2);
multiple = 4 * a * c;
diff = square - multiple;
root = sqrt(diff);
product = 2 * a;
minusb = -1 * b;
sum1 = minusb - root;
divide1 = sum1 / product;
return divide1;
}


