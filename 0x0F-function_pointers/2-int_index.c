int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

else if (size <= 0 || !array || !cmp)
  return (-1);

if (array && size && cmp)
while (i < size)
{
cmp(array[i]);
i++;
}
return (i);
}
