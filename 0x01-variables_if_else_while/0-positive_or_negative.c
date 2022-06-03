#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
				        if (n>0); 
					{
						printf("%d : if the number is greater than 0: %c\n", n, is positive);
					}
					else (n==0);
                                        {
						printf("%d : if the number is 0: %c\n", n, is zero);
					}
					else (n<0);
					{
						printf("%d : if the number is less than 0: %c\n", n, is negative);
					}
					return (0);
}
