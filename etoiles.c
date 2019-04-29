/*
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
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int aux=0;

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			while(aux<(i+1))
			{
				printf("* ");
				aux++;
			}
			
			
		}
		printf("\n");
		aux=0;
	}
	


	int aux1=0;

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			while(aux1 <(5-i))
			{
				printf("* ");
				aux1++;
			}
			
			
		}
		printf("\n");
		aux1=0;
	}
	

	int aux2=0;

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			while(aux2<(i+1))
			{
				printf("* ");
				aux2++;
			}
			
			
		}
		printf("\n");
		aux2=0;
	}



	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{

			if((i==0 && j==2) || 
				(i==1 && j==1) || 
				(i==1 && j==3) || 
				(i==2 && j==0) || 
				(i==2 && j==4) || (i==3 && j==1) || (i==3 && j==3) || (i==4 && j==2))
			{
				printf(" *");
				
			}
			else printf("  ");
			
			
		}
		printf("\n");
		
	}
printf(" %%%%%%%%%%%%%%%%%%%%%%%%%%%% ");
printf("\n");

int aux3;

for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			aux3 =i+(-j);

			if(((i + j) == 2) || (j-i == 2)|| (i-j == 2)||(i==3 && j==3))  printf(" *");

			else printf("  ");
		}
		printf("\n");
		
	}


	
	return 0;
}
