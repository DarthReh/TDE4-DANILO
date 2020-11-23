#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
 int info;
 struct lista *prox;
}Lista;

typedef struct fila{
 Lista *ini;
 Lista *fim;
}Fila;

Fila *inicialize(){
 Fila *prim = (Fila*)malloc(sizeof(Fila));
 prim->ini = NULL;
 prim->fim = NULL;
 return prim;
}

void *push(Fila *p, int carta){
 Lista *novo = (Lista*)malloc(sizeof(Lista));
 novo->info = carta;
 novo->prox = NULL;
 if(p->ini==NULL){
  p->ini = novo;
  p->fim = novo;
 }else{
  p->fim->prox = novo;
  p->fim = novo;
 }

}

int pop(Fila *p){
 int carta;
 Lista *l;

 l = p->ini;
 carta = l->info;

 p->ini = l->prox;
 if(p->ini==NULL)
  p->fim = NULL;

 free(l);

 return carta;
}

int vazio(Fila *p){
 return p->ini==NULL;
}

int main(){

 int n, i, carta, cont = 0;
 Fila *fila;

 fila = inicialize();

 do{
  scanf("%d", &n);
  if(n){
   cont = n;
   for(i=1;i<=n;i++){
    push(fila, i);
   }

   printf("Discarded cards:");

   while(cont!=1){
    printf(" %d", pop(fila));
    push(fila, pop(fila));

    if(cont!=2)
     printf(",");
    cont--;
   }

   if(!vazio(fila))
    printf("\nRemaining card: %d\n", pop(fila));
  }
 }while(n!=0);

 return 0;
}



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int ABC, char **ABCD)
{   

    int I, CONTADOR;
    char LINHA[100100];

    scanf("%s", LINHA);

    for (I = 0; LINHA[I]; ++I)
    {

        if (LINHA[I] != '(')
            continue;

        for (CONTADOR = I + 1; LINHA[CONTADOR]; ++CONTADOR)
        {

            if (LINHA[CONTADOR] == ')')
            {

                LINHA[I] = 'X';
                LINHA[CONTADOR] = 'X';
                break;

            }

        }

    }

    int C = 0;
    for (I = 0; LINHA[I]; ++I)
        if (LINHA[I] == '(')
            ++C;

    if (C == 0)
        puts("Partiu RU!");
    else
        printf("Ainda temos %d assunto(s) pendente(s)!\n", C);
    
    return 0;

}

