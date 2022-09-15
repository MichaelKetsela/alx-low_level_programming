#include "main.h"

/**
* fizz_buzz - prints the numbers from 1 to 100, followed by a new line
* But for multiples of three print Fizz instead of the number and 
* for the multiples of five print Buzz.
* For numbers which are multiples of both three and five print FizzBuzz
* Return: always 0;
*/
 void fizz_buzz(int)
 {
 int i;
 for(i = 0; i <= 100 ; i++)
 {
 if(i % 3 && i % 5)
 {
 printf("FizzBuzz ");
 }
 else if (i % 3 == 0)
 {
 printf("Fizz ")
 }
 else if (i % 5 == 0)
 {
 printf("Buzz ")
 }
 else
 {
 printf("%d ", i)
 }
 }
 }
