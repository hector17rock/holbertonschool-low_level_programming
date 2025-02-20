#include "main.h"

/**
 * jack_bauer - prints every minute of the day, starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hour, minute;

	/* Loop through each hour of the day (from 00 to 23) */
	for (hour = 0; hour < 24; hour++)
	{
		/* Loop through each minute of the current hour (from 00 to 59) */
		for (minute = 0; minute < 60; minute++)
		{
			/* Print the hour's tens place */
			_putchar(hour / 10 + '0');
			/* Print the hour's ones place */
			_putchar(hour % 10 + '0');
			/* Print the colon separator */
			_putchar(':');
			/* Print the minute's tens place */
			_putchar(minute / 10 + '0');
			/* Print the minute's ones place */
			_putchar(minute % 10 + '0');
			/* Print a newline character after each time */
			_putchar('\n');
		}
	}
}
