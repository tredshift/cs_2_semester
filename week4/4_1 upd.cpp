#include <iostream>

using namespace	std;

enum Months
{
	MONTH_JANUARY,
	MONTH_FEBRUARY,
	MONTH_MARCH,
	MONTH_APRIL,
	MONTH_MAY,
	MONTH_JUNE,
	MONTH_JULY,
	MONTH_AUGUST,
	MONTH_SEPTEMBER,
	MONTH_OCTOBER,
	MONTH_NOVEMBER,
	MONTH_DECEMBER
};

void printMonth(Months month)
{
	switch (month)
	{
	case MONTH_JANUARY:
		cout << "31";
		break;
	case MONTH_FEBRUARY:
		cout << "28";
		break;
	case MONTH_MARCH:
		cout << "31";
		break;
	case MONTH_APRIL:
		cout << "30";
		break;
	case MONTH_MAY:
		cout << "31";
		break;
	case MONTH_JUNE:
		cout << "30";
		break;
	case MONTH_JULY:
		cout << "31";
		break;
	case MONTH_AUGUST:
		cout << "31";
		break;
	case MONTH_SEPTEMBER:
		cout << "30";
		break;
	case MONTH_OCTOBER:
		cout << "31";
		break;
	case MONTH_NOVEMBER:
		cout << "30";
		break;
	case MONTH_DECEMBER:
		cout << "31";
		break;
	}
}


void main()
{
	printMonth(MONTH_FEBRUARY);
	system("pause");
}