/* Name: Nathália Pimentel de Assis
  University: University of Brasilia
  Bachelor student in eletronic engineering course
  Date: June 18th 2019 */



#include <stdio.h>
int main()
{
    double soma, M[12][12];
    char operacao[2];
    int coluna,i,j,k,cont;
    soma=0.0;
    cont = 1;


    scanf("%s", &operacao);
    for(i=0;i<=11;i++)
    {
        for(j=0; j<=11; j++)
            scanf("%lf", &M[i][j]);
    }
    for(k=0; k<=11;k++)
    {
        for(coluna=cont; coluna<=11;coluna++)
            soma = soma + M[k][coluna];
        cont++;
    }
    if(operacao[0]=='S')
        printf("%.1lf\n",soma);
    else if(operacao[0]=='M')
    {
        printf("%.1lf\n",soma/66.0);
    }
    return 0;
}
