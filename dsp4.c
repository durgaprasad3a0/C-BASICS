//printing all arithmetic operations
#include<stdio.h>
void main()
{
	int p,m,A,S,M,D,MD;
	p = 2000;
	m = 1995;
	
	A = p+m;
	S = p-m;
	M = p*m;
	D = p/m;
   MD = p%m;
   printf("sum of %d and %d is %d\n", p, m,A);
   printf("difference of %d and %d is %d\n", p, m, S);
   printf("multiple of %d and %d is %d\n", p, m, M);
   printf("division of %d and %d is %d\n", p, m, D);
   printf("module division of %d and %d is %d", p, m, MD);  
}
