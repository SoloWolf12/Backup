#include<stdio.h>
#include<conio.h>

int main()
{
    int val;

    do
    {
        printf("escriba un num de 0 a 999, si pone 0, el programa termina.\n");
        scanf("%i",&val);

        while(val<0 || val>999)
        {
            if (val<0){printf("no use numeros negativos\n");}
            else{printf("no pase del 999\n");}
            
            printf("escriba un num de 0 a 999, si pone 0, el programa termina.\n");
            scanf("%i",&val);
        }

        if (val==0){
            break;
        }
        if(val<10)
        {
            printf("su numero tiene un digito\n");
        }
        else if (val<100)
        {
            printf("su numero tiene 2 digitos\n");
        }
        else 
        {
            printf("su numero tiene 3 digitos\n");
        }

    }while(val!= 0);

    printf("Programa finalizado.");

    getch();
    return 0;
}