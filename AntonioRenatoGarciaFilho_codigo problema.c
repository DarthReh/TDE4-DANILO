<<<<<<< HEAD:AntonioRenatoGarciaFilho_codigo problema.c
1259-resolucao

#include <stdio.h>
#include <stdlib.h>

int ascending(void const *a, void const *b )
{
    return (*(int*)a - *(int*)b );
}

int descending(void const *a, void const *b )
{
    return (*(int*)b - *(int*)a );
}

int main(){
    int n, i, num, par, impar;
    
    scanf("%d", &n);
    par = 0;
    impar = 0;
    int np[n];
    int ni[n];
    
    for(i = 0; i < n; i++){
        scanf("%d", &num);
        if(num%2 == 0){
            np[par] = num;
            par++;
        }else{
            ni[impar] = num;
            impar++;
        }
    }
    qsort(np, par, sizeof(int), ascending);
    qsort(ni, impar, sizeof(int), descending);
    for(i = 0; i < par; i++){
        printf("%d\n",np[i]);
    }
    for(i = 0; i < impar; i++){
        printf("%d\n",ni[i]);
    }
    
    return 0;
}


1548-resolucao

#include <stdio.h>

void selection(short *, unsigned short);
int trocas;

void main ()
{

	unsigned short casos;
	unsigned short numAlunos;
	int i;

	scanf("%hu", &casos);

	while (casos--)
	{

		scanf("%hu", &numAlunos);

		short filaAntes[numAlunos];
		short filaDepois[numAlunos];

		for (i = 0; i < numAlunos; i++)
		{
			scanf("%hd", &filaAntes[i]);
			filaDepois[i] = filaAntes[i];
		}

		trocas = 0;
		selection(filaDepois, numAlunos);

		for (i = 0; i < numAlunos; i++)
			if (filaAntes[i] == filaDepois[i])
				trocas++;

		printf("%d\n", trocas);

	}

}

void selection(short *vetor, unsigned short tam)
{

	unsigned short i, j;
	short maior, temp;

	for (i = 0; i < tam - 1; i++)
	{

		maior = i;
		for (j = i + 1; j < tam; j++)
			if (vetor[j] > vetor[maior])
				maior = j;

		if (i != maior)
		{

			temp = vetor[i];
			vetor[i] = vetor[maior];
			vetor[maior] = temp;

		}

	}

}






































>>>>>>> 7bf43a666b25c31c344faad021d708e823d86797:AntonioRenatoGarciaFilho_codigo problema.c.txt
