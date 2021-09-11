#include<stdio.h>
#include<conio.h>

int main()
{
char sentence[200];
int pos=0;

printf("escriba algo..\n");
gets(sentence);

if(sentence[pos] == 'a')
{
printf("su frase comenzo con a");
}
else if (sentence[pos] == 'A')
{
printf("su frase comenzo con A");
}
else
{
printf("su frase comenzo con no comenzo ni con a ni tampoco A");
}



getch();
return 0;
}