#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -Entry point 
 * dircription: 'Check the number if positive or negative 
 * Return: Always 0
*/

int main(void)
{
	int n;
	
	if (n > 0)
	 {
	    printf("%d is positive\n", n);
	 }
        else if (n == 0)
	{
	    printf("%d is zero\n", n);
	}
        else 
	{
	    printf("%d is negative\n", n);
	}	    
	return (0);
}

