#include <stdio.h>
long add(long *, long *);
 
int main()
{
   long fno, sno, sum;
   printf(" Input the first number : ");
   scanf("%ld", &fno);
   printf(" Input the second  number : ");
   scanf("%ld", &sno);   
   sum = add(&fno, &sno);
   printf(" The sum of %ld and %ld  is %ld\n\n", fno, sno, sum);
   return 0;
}
long add(long *n1, long *n2) 
{
   long sum;
   sum = *n1 + *n2;
   return sum;
}

