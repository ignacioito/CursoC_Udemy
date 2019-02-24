#include<stdlib.h>
#include<stdio.h>

struct Pessoa{
	char nome[50], rua[50];
	int idade, numero;
};

int main(int argc, char const *argv[])
{
	//declaration d'une variable struct
	struct Pessoa p[4];
	printf("Digite para nome:\n");
	scanf(" %c ", p[1].nome);
	for (int i = 0; i < 4; ++i)
	{
		gets(p[i].nome);
		scanf("%d", &p[i].idade);
		gets(p[i].rua);
		scanf(" %d", &p[i].numero);
	}
	system("pause");

	return 0;
}
