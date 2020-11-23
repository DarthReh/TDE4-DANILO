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
    int N, i, diamantes, achou, a;
    char linha[1001];
 
 #ifdef DEBUG
  double tI_ = clock();
 #endif
 
    scanf("%d", &N);
 
 while(N--){
  scanf(" %s", linha);
  
  achou = 1;
  diamantes = 0;
  
  while(achou){
   a = 0;
   achou = 0;
   
   for(i = 0; linha[i] != '\0'; i++)
   {
    if(linha[i] == '<' && a == 0)
    {
     a = 1;
     linha[i] = '.';
    }
    
    if(linha[i] == '>' && a)
    {
     a = 0;
     achou = 1;
     diamantes++;
     linha[i] = '.';
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

//

#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int cnt=0, i;
    double drtn=0.0;
    while(gets(str))
    {
        if(str[0]=='*') break;
        for(i=0, cnt=0; str[i]; i++)
        {
            if(str[i]=='/')
            {
                if(drtn==1.00) cnt++;
                drtn = 0.00;
            }
            else if(str[i]=='W') drtn+=(1.00);
            else if(str[i]=='H') drtn+=(1.00/2.0);
            else if(str[i]=='Q') drtn+=(1.00/4.0);
            else if(str[i]=='E') drtn+=(1.00/8.0);
            else if(str[i]=='S') drtn+=(1.00/16.0);
            else if(str[i]=='T') drtn+=(1.00/32.0);
            else if(str[i]=='X') drtn+=(1.00/64.0);
        }
        printf("%d\n", cnt);
    }
    return 0;
}




