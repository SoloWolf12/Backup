#include <stdio.h>

int main()
{

    int num, i, op;
    printf("ingrese un numero: ");
    scanf("%i",&num);
    
    
    i=1;
    
    op=num%10;   //esto calcula el valor del resto
    
    printf("el contenido del digito numero %i es %i\n",i,op);  //siempre arranca por la unidad
    
    do{
        if(num>10)
    {
        i+=1;
        num=num/10;
        op=num%10;
        printf("el contenido del digito numero %i es %i\n",i,op);
        
    }
    } while (num>10);

    return 0;
}
