#include <iostream>
#include <cmath>

using namespace std;
float height (float distance, float degree);


main()
{

float distance;
float h;
float angle;


cout << "Enter distance :" <<endl;
cin >> distance;
cout << "Enter angle of elevation :" << endl;
cin >> angle;
h = height (distance, angle);
cout << h;
}


float height (float distance, float degree)
{
float height;
float angle;
float radian;


radian = 57.2958;
radian = degree / radian;
angle = tan(radian);
height = angle * distance;

return height;

}