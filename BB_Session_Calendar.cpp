#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main ()
{
	int mnth, day, yr;
	string MONTH;
	
	
	cout << "Enter month: "; cin >> mnth;
	cout << "Enter day: "; cin >> day;
	cout << "Enter year: "; cin >> yr;
	
	if (mnth==1 && day<=31)
	{
		MONTH = "January";
		cout << MONTH << " " << day << "," << yr << endl;
	}
	else if (mnth==2 && day<=28)
	{
		MONTH = "February";
		cout << MONTH << " " << day << "," << yr << endl;
	}
	else if (mnth==3 && day<=31)
	{
		MONTH = "March";
		cout << MONTH << " " << day << "," << yr << endl;
	} 
	else if (mnth==4 && day<=30)
	{
		MONTH = "April";
		cout << MONTH << " " << day << "," << yr << endl;
	}
	else if (mnth==5 && day<=31)
	{
		MONTH = "May";
		cout << MONTH << " " << day << "," << yr << endl;
	}
	else if (mnth==6 && day<=30)
	{
		MONTH = "June";
		cout << MONTH << " " << day << "," << yr << endl;
	}
	else if (mnth==7 && day<=31)
	{
		MONTH = "July";
		cout << MONTH << " " << day << "," << yr << endl;
	}
	else if (mnth==8 && day<=31)
	{
		MONTH = "August";
		cout << MONTH << " " << day << "," << yr << endl;
	}
	else if (mnth==9 && day<=30)
	{
		MONTH = "September";
		cout << MONTH << " " << day << "," << yr << endl;
	}
	else if (mnth==10 && day<=31)
	{
		MONTH = "October";
		cout << MONTH << " " << day << "," << yr << endl;
	}
	else if (mnth==11 && day<=30)
	{
		MONTH = "November";
		cout << MONTH << " " << day << "," << yr << endl;
	}
	else if (mnth==12 && day <=31)
	{
		MONTH = "December";
		cout << MONTH << " " << day << "," << yr << endl;
	}
	else
	{
		cout << "INVALID DATE!" << endl;
	}
	
	_getch();
	return 0;
}
