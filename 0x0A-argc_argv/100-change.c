#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 1 if ERROR
 * 0 if no ERROR
 */
int coins( int S[], int m, int n ) {
   int i, j, x, y;
   int table[n+1][m];
   for (i=0; i<m; i++)
      table[0][i] = 1;
   for (i = 1; i < n+1; i++) {
      for (j = 0; j < m; j++) {
         x = (i-S[j] >= 0)? table[i - S[j]][j]: 0;
         y = (j >= 1)? table[i][j-1]: 0;
         table[i][j] = x + y;
      }
   }
   return table[n][m-1];
}

int main(int argc, char *argv[])
{
int arr[] = {1, 2, 5, 10, 25};
   int m = sizeof(arr)/sizeof(arr[0]);
   int n = atoi(argv[2]);
if (argc != 2)
{
printf("Error\0");
return (1);
}
   printf("%d ", coins(arr, m, n));
return (0);
}
