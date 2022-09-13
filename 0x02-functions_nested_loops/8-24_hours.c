#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * n starting  00:00 to 23:59, loops every min and hour.
 * Return: 0
 */
void jack_bauer(void)
{
	int hrs = 0;
	int mins = 0;
	int hrs_reminder;
	int mins_reminder;

	while (hrs <= 23)
	{
	while (mins <= 59)
	{
	mins_reminder = mins % 10;
	hrs_reminder = hrs % 10;
	_putchar(hrs / 10 + '0');
	_putchar(hrs_reminder + '0')
	_putchar(mins / 10 + '0');
	_putchar(mins_reminder + '0')
	mins++;
	_putchar('\n');
	}
	hrs++;
	mins = 0;
}	
}
