#include "main.h"

int cmp(char *a, char *b ,int i)
{
if (i >= 0 && a[i] == b[i])
return (cmp(a, b , --i));
else
return (0);

return (1);
}

int wildcmp(char *s1, char *s2)
{
int i = strlen(s1) - 1;
int j = strlen(s2) - 1;
if i == j
return (cmp(char *a, char *b ,int i));
  
else
return (0);
}
