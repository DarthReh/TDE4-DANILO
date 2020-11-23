<<<<<<< HEAD:AntonioRenatoGarciaFilho_codigo problema.c
1259-resolucao

#include <stdio.h>
#include <stdlib.h>

int ascending(void const *e, void const *d )
{
    return (*(int*)e - *(int*)d );
}

int descending(void const *e, void const *d )
{
    return (*(int*)d - *(int*)e );
}

int main(){
    int n, d, num, par, impar;
    
    scanf("%d", &n);
    par = 0;
    impar = 0;
    int np[n];
    int ni[n];
    
    for(d = 0; d < n; d++){
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
    for(d = 0; d < par; d++){
        printf("%d\n",np[d]);
    }
    for(d = 0; d < impar; d++){
        printf("%d\n",ni[d]);
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
	int b;

	scanf("%hu", &casos);

	while (casos--)
	{

		scanf("%hu", &numAlunos);

		short filaAntes[numAlunos];
		short filaDepois[numAlunos];

		for (b = 0; b < numAlunos; b++)
		{
			scanf("%hd", &filaAntes[b]);
			filaDepois[b] = filaAntes[b];
		}

		trocas = 0;
		selection(filaDepois, numAlunos);

		for (b = 0; b < numAlunos; b++)
			if (filaAntes[b] == filaDepois[b])
				trocas++;

		printf("%d\n", trocas);

	}

}

void selection(short *vetor, unsigned short tam)
{

	unsigned short b, j;
	short maior, temp;

	for (b = 0; b < tam - 1; b++)
	{

		maior = b;
		for (j = b + 1; j < tam; j++)
			if (vetor[j] > vetor[maior])
				maior = j;

		if (b != maior)
		{

			temp = vetor[b];
			vetor[b] = vetor[maior];
			vetor[maior] = temp;

		}

	}

}







































>>>>>>> 7bf43a666b25c31c344faad021d708e823d86797:AntonioRenatoGarciaFilho_codigo problema.c.txt
