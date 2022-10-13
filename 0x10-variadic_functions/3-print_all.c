#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
int i = 0;
char *s;

va_list ls;
va_start(ls, format);
while (format[i])
{
switch (format[i])
{
  case 'c':
    printf(" %c", va_arg(ls, char));
    break;
  case 'i':
    printf(" %d", va_arg(ls, int));
    break;
  case 'f':
    printf(" %f", va_arg(ls, double));
    break;
  case 's':
    s = va_arg(ls, char *);
    if (!s)
      s = "(nil)";
    printf(" %s", s);
    break;
    default;
    i++;
    continue;
}
  s = ", ";
  i++;

}
printf("\n");
va_end(ls); 
}
