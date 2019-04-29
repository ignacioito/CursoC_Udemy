#include<stdio.h>
#include<stdlib.h>


void bubbleSort(int *V, int N);
int main(int argc, char const *argv[])
{
	
	int array[6] = {23,4,67,8,90,54};
	bubbleSort(array, 5);
	
	system("pause");
	return 0;
}

int bubbleSort(int *V, int N){
	int i, continua, aux, fim=N;
	
		for (int i = 0; i < fim-1; ++i)
	{
		if (V[i]>V[i+1])
		{
			aux = i;
			V[i] = V[i+1];
			V[i+1] = aux;
			continua = i;
		}
		fim--;
			}
		return for (int i = 0; i < fim-1; ++i)
		{
			printf("%d\n", V[i]);
		}
}