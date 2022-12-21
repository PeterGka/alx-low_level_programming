#include <stdlib.h>
#include <time.h>
/* main program entry
 *
 *if control to check no. positive or negative
 *Always return 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	{
	if (n > 0)
		printf("is positive\n");
	else
		if(n == 0)
			printf("is zero\n");
		else
			if(n < 0)
				printf("is negative\n");
	}
	return (0);
}
