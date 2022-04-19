#include <stdio.h>
#include <errno.h>
#include <string.h>

int main ()
{
	FILE *fp;

	fp = fopen("kuchbhi.txt", "r");

	printf("Value of errno: %d\n ", errno);
	printf("The error message is : %s\n",strerror(errno));
	perror("Message from perror");

	return 0;
}
