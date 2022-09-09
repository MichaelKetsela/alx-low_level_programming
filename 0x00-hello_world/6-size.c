#include<stdio.h>
/**
 * main-Entry point
 *
 * Return:Alwasys 0 (Success)
 */
int main(void)
{
char ch;
int i;
long int li;
long long int lli;
float f;
 
printf("Size of a char:%lu byte(s)\n",sizeof(ch));
printf("Size of an int:%lu byte(s)\n",sizeof(i));
printf("Size of an long int:%lu byte(s)\n",sizeof(li));
printf("Size of an long long int:%lu byte(s)\n",sizeof(lli));
printf("Size of an float:%lu byte(s)\n",sizeof(f));
 
 return (0);
}
