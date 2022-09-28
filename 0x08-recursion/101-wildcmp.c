#include "main.h"

int cmp(char *a, char *b ,int i)
{
if (a[i] != b[i])
return (0);

if (i >= 0 && a[i] == b[i])
return (cmp(a, b , --i));

return (1);
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
