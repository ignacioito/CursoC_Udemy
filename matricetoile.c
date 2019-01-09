#include <stdio.h>
#include <stdlib.h>


int main()
{
	float mat[4][4], maior=0, menor=45787584, soma=0;

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			printf("Digite o número: \n");
			scanf("%f", &mat[i][j]);
			soma = soma + mat[i][j];
		}
	}
	system("pause");
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if (mat[i][j]>maior)
			{
				maior = mat[i][j];
			}
		}
	}
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if (mat[i][j]<menor)
			{
				menor = mat[i][j];
			}
		}
	}
	printf("Maior = %.2f, Menor = %.2f, Media = %.2f \n", maior, menor, soma/16);
}
