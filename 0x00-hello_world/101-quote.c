#include <unistd.h>
/**
 * main - Entry point
 * Description - program line followed by a new line, to the standard error
 * return :0 always(success)
 */
int main(void)
{
write(2, "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n",
	      59);
return (1);
}
