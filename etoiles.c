#include<stdio.h>
#include<stdlib.h>


int main()
{
	char aux = '*';
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 5; j > 0; --j)
		{
			if(aux > i)
			{
				printf(" %c", aux);
				printf("  ");
				
			}		
		}
		printf("\n");
	}

	return 0;
}