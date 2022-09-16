#include "main.h"

/**
* main - prints the numbers from 1 to 100
* for multiples of three print Fizz
* for the multiples of five print Buzz
* For multiples of both three and five print FizzBuzz
* Return: always 0;
*/
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
if (i != 100)
{
printf("Buzz ");
}
else
{
printf("Buzz");
}
}
else
{
printf("%d ", i);
}
}
printf("\n");
return (0);
}
