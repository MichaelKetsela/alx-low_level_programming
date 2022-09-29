#include "main.h"

int cmp(char *a, char *b )
{
int l1 = strlen(a);
int l2 = strlen(b);
int i = 0;
int j = 0;
if (l1 != l2)
return 0;

else if (i < l1)
{
if (a[i] == b[i])
i++;
j++;
cmp(a, b);
}
if (i == j)
return (1);

return (0);
}

int wildcmp(char *s1, char *s2)
{
return (cmp(s1, s2));
}
