#include <stdio.h>
#include <unistd.h>

 /**
  * main - Entry point 
  * Return: Always 1
 */

int main() 
{
    char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(STDERR_FILENO, message, 38);
    return 1;
}	
