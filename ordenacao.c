#include<stdio.h>
#include<stdlib.h>


void bubbleSort(int *V, int N);
int main(int argc, char const *argv[])
{
	
	int array[6] = {23,4,67,8,90,54};
	bubbleSort(array, 5);
	printf("%d\n", array[1]);
	
	return 0;
}

void bubbleSort(int *V, int N){
	int i, continua, aux, fim=N;
	do{
		for (int i = 0; i < fim; ++i)
	{
		if (V[i]>V[i+1])
		{
			aux = i;
			V[i] = V[i+1];
			V[i+1] = aux;
			continua = i;
		}
			}
		fim--;
}while(continua!=1);
	
}