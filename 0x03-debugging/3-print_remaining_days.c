#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int dayOfYear = day;
	int i;

	if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
	{
		daysInMonth[2] = 29;
		}

	if (day > daysInMonth[month])
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}
	
	for (i = 1; i < month; i++)
	{
		dayOfYear += daysInMonth[i];
	}
	printf("Day of the year: %d\n", dayOfYear);
	printf("Remaining days: %d\n", daysInMonth[2] - day + 1);
}

