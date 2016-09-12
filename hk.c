

#include <stdio.h>
 
int main()
{
   int f, s, *p, *q, sum;
 
   printf("Enter two integers to add\n");
   scanf("%d%d", &first, &second);
 
   p = &f;
   q = &s;
 
   sum = *p + *q;
 
   printf("Sum of entered numbers = %d\n",sum);
 
   return 0;
}
