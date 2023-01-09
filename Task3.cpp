#include <iostream>
using namespace std;
bool istrue(int number);

main()
{

    int number;
    cout << " Enter the number" << endl;
    cin >> number;
    istrue(number);
}
bool istrue(int symmetrical)
{

    int number1;
    int number2;
    int number3;

    number1 = symmetrical % 10;
    symmetrical = symmetrical / 10;
    number2 = symmetrical % 10;
    symmetrical = symmetrical / 10;
    number3 = symmetrical % 10;

    if (number1 == number3)
    {
        cout << "symmetrical" << endl;
    }
    if (number1 != number3)
    {
        cout << "unsymmetrical " << endl;
    }
    return istrue;
}