2958-QUESTAO

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define true 1
#define false 0

int compare(int *, int *);


int main(int argc, char **argv)
{

	char n;
	int o, p, q, r, x, i;
	scanf("%d %d", &o, &p);
	x = o * p;

	int vet[x];
	int vet2[x];

	for (i = r = q = 0; i < x; ++i)
	{

		scanf("%d%c", &o, &n);
		if (n == 'V')
			vet[r++] = (o * 100) + n;
		else
			vet2[q++] = (o * 100) + n;

	}

	qsort(vet, r, 4, compare);
	qsort(vet2, q, 4, compare);

	for (i = 0; i < r; ++i)
		printf("%d%c\n", vet[i] / 100, (char)(vet[i] % 100));

	for (i = 0; i < q; ++i)
		printf("%d%c\n", vet2[i] / 100, (char)(vet2[i] % 100));

	return 0;

}

int compare(int *s, int *t)
{

	return *t - *s;

}

