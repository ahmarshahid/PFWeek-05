#include<iostream>
#include<cmath>
using namespace std;

main()
{

	system("cls");
	int hour, mins;
	int aftermins, afterhour;

	cout << "Enter Hour(s)=> ";
	cin >> hour;
	cout << "Enter Minute(s)=> ";
	cin >> mins;
	
	if(mins<45)
	{
		aftermins = mins+15;
		cout << hour << ":" << aftermins;
		return 0;
	}
	if(hour<23)
	{
		afterhour = hour + 1; 
		aftermins = (mins-45);
		cout << afterhour << ":" << aftermins;
		return 0;
	}
	if(hour==23)
	{
		afterhour = 0;
		aftermins = (mins-45);
		cout << afterhour << ":" << aftermins;

	}

}