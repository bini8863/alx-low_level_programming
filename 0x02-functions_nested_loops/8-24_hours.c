#include "main.h"

/**
* jack_bauer - prints every minute of the day
* n from 00:00 too 23:59, min loop counts mins, while hour loop counts hours
* Return: 0
*/
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_reminder;
	int mins_reminder;

	while (hours <= 23)
	{
	while (minutes <= 59)
	{
	mins_reminder = minutes % 10;
	hours_reminder = hours % 10;
	_putchar(hours / 10 + '0');
	_putchar(hours_reminder + '0');
	_putchar(':');
	_putchar(minutes / 10 + '0');
	_putchar(mins_reminder + '0');
	minutes++;
	_putchar('\n');
	}
hours++;
minutes = 0;
}
}
