#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * change - change function
 * @temp: cents to be passed
 * Return: 0;
 */

int change(int temp)
{
	int count = 0;

	
	 while (temp)
        {
                if (temp == 1)
                {
                        count++;
                        temp -= 1;
                }
                else if ((temp > 1) && (temp < 5))
                {
                        count++;
                        temp -= 2;
                }
                else if ((temp >= 5) && (temp < 10))
                {
                        count++;
                        temp -= 5;
                }
                else if ((temp >= 10) && (temp < 25))
                {
                        count++;
                        temp -= 10;
                }
                else if (temp >= 25)
                {
                        count++;
                        temp -= 25;
                }
        }
	 return (count);
}
