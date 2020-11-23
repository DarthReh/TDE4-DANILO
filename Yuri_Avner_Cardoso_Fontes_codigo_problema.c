//1763-Tradutor do Papai Noel

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char *paises[24] = { "brasil", "alemanha", "austria", "coreia", "espanha", "grecia", "estados-unidos",
			"inglaterra", "australia", "portugal", "suecia", "turquia", "argentina", "chile",
			"mexico", "antardida", "canada", "irlanda", "belgica", "italia", "libia", "siria",
			"marrocos", "japao" };
char *saudacoes[24] = { "Feliz Natal!", "Frohliche Weihnachten!", "Frohe Weihnacht!", "Chuk Sung Tan!",
				"Feliz Navidad!", "Kala Christougena!", "Merry Christmas!", "Merry Christmas!",
				"Merry Christmas!", "Feliz Natal!", "God Jul!", "Mutlu Noeller", "Feliz Navidad!",
				"Feliz Navidad!", "Feliz Navidad!", "Merry Christmas!", "Merry Christmas!", "Nollaig Shona Dhuit!",
				"Zalig Kerstfeest!", "Buon Natale!", "Buon Natale!", "Milad Mubarak!", "Milad Mubarak!", "Merii Kurisumasu!" };
typedef struct{

	char pais[50];
	char saudacao[100];

} tradutor;

tradutor traducao[24];
unsigned short posicao;

void addtradutor();
bool pesquisa(char *);

void main ()
{

	addtradutor();
	char pais[100];

	while (scanf(" %s", pais) != EOF)
	{

		if (pesquisa(pais))
			printf("%s\n", traducao[posicao].saudacao);
		else
			printf("--- NOT FOUND ---\n");

	}

}

void addtradutor()
{

	unsigned short j;

	for (j = 0; j < 24; j++)
	{
		strcpy(traducao[j].pais, paises[j]);
		strcpy(traducao[j].saudacao, saudacoes[j]);
	}

}

bool pesquisa(char *pais)
{

	unsigned short j;

	for (j = 0; j < 24; j++)
		if (strcmp(traducao[j].pais, pais) == 0)
		{
			posicao = j;
			return true;
		}

	return false;

}
