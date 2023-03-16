#include <stdio.h>
/**
 * main - A program that prints size of various types
 * Return : 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("size of char:%zu byte\n", sizeof(a));
printf("size of int:%zu byte\n", sizeof(b));
printf("size of long int :%zu byte\n", sizeof(c));
printf("size of long long int:%zu byte\n", sizeof(d));
printf("size of float:%zu byte\n", sizeof(f));
return 0 ;
}
