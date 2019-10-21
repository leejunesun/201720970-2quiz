#include <stdio.h>
int main(void)
{
	int i=1;
	int *pi=i;
	pi=i;

	for(pi; pi<1001;pi++)
		printf("%d  \n",*pi);
	return 0;
}
	
