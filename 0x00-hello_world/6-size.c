#include <stdio.h>
/**
 * main - A program that prints size of various types
 * Return : 0 (success)
 */
int main()
{
	char char type;
	int int type;
	long int long int type;
	long long int long long int type;
printf("size of char:%zu byte\n", sizeof(charType));
printf("size of int:%zu byte\n", sizeof(intType));
printf("size of long int :%zu byte\n", sizeof(longintType));
printf("size of long long int:%zu byte\n", sizeof(longlongintType));
return 0;
}
