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
printf("size of char:%zu byte(s)\n",(unsigned long)sizeof(a));
printf("size of int:%zu byte(s)\n", (unsigned long)sizeof(b));
printf("size of long int :%zu byte(s)\n", (unsigned long)sizeof(c));
printf("size of long long int:%zu byte(s)\n", (unsigned long)sizeof(d));
printf("size of float:%zu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
