//diamantes e areias 1069
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

#define MIN(a, b) ((a) < (b) ?  (a) : (b))
#define MAX(a, b) ((a) > (b) ?  (a) : (b))
#define ABS(a)  ((a) <  0  ? -(a) : (a))
#define IMPAR(a) ((a)&1)
#define CTOI(a)  ((a) - '0')
#define ITOC(a)  ((a) + '0')

#define TRUE 1
#define FALSE 0

int main()
{
    int A, B, diamantes, achou, a;
    char linha[1001];
 
 #ifdef DEBUG
  double tI_ = clock();
 #endif
 
    scanf("%d", &A);
 
 while(A--){
  scanf(" %s", linha);
  
  achou = 1;
  diamantes = 0;
  
  while(achou){
   a = 0;
   achou = 0;
   
   for(B = 0; linha[B] != '\0'; B++)
   {
    if(linha[B] == '<' && a == 0)
    {
     a = 1;
     linha[B] = '.';
    }
    
    if(linha[B] == '>' && a)
    {
     a = 0;
     achou = 1;
     diamantes++;
     linha[B] = '.';
    }
   }
  }
  
  printf("%d\n", diamantes);
 }
 
 #ifdef DEBUG
  printf("Tempo: %.1lf %.1lf\n", clock() - tI_, (clock() - tI_) / CLK_TCK);
 #endif
 
 return 0;
}

//composição de jingles 1430

#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int contador=0, i;
    double a=0.0;
    while(gets(str))
    {
        if(str[0]=='*') break;
        for(i=0, contador=0; str[i]; i++)
        {
            if(str[i]=='/')
            {
                if(a==1.00) contador++;
                a = 0.00;
            }
            else if(str[i]=='W') a+=(1.00);
            else if(str[i]=='H') a+=(1.00/2.0);
            else if(str[i]=='Q') a+=(1.00/4.0);
            else if(str[i]=='E') a+=(1.00/8.0);
            else if(str[i]=='S') a+=(1.00/16.0);
            else if(str[i]=='T') a+=(1.00/32.0);
            else if(str[i]=='X') a+=(1.00/64.0);
        }
        printf("%d\n", contador);
    }
    return 0;
}




