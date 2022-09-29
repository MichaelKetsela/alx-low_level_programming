#include "main.h"

int cmp(char *a, char *b ,int i)
{
int c = 0;
int j = 0;

if (c < i )
{
if (a[c] == b[c])
c++;
j++;
cmp(a, b , i);
}
if (c == j)
return (1);

return (0);
}

int wildcmp(char *s1, char *s2)
{
int i = strlen(s1) - 1;
int j = strlen(s2) - 1;

if (i == j)
return (cmp(s1, s2, i));
  
else
return (0);
}
