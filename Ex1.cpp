//1) Fazer um algoritmo que leia um número e imprima o valor lido caso seja maior que 50.

#include<stdio.h>
#include<conio.h>
 
 main()
 {
  int n1;
 int n2;
 int op;
 int soma;
 int sub;
 
 printf("Informe um número: \n");
 scanf("%d",&n1);
 
  printf("Informe um número: \n");
 scanf("%d",&n2);
 
 if (numero>50);
 {
 printf("Informe uma operação:\n");
 printf("1- Soma e 2 -  Subtração");
scanf("%d",&op);
if (op==1)
{
 soma = n1+n2;
 printf ("O resultado da soma eh: %soma");
}
else if(op==2)&& (n1>n2)
{
 sub = n1-n2;
 printf ("O resultado da subtração eh: %sub ")
}
}
else
{
 printf("Numero eh menor que 50, nao podemos fazer nada com ele.")
}
}
