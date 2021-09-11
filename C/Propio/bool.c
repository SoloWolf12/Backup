#include <stdio.h>
#include <stdbool.h>

int main()
{
    int val1;
    int val2;
    int success;

    do
    {
        success = true;
        printf("escribir val 1\n");
        scanf("%i", &val1);
        printf("escribir val 2\n");
        scanf("%i", &val2);

        if (val1 == 1)
        {
            success = true && success;
            printf("val1 correcto, continue\n");
        }
        else
        {
            success = false && success;
            printf("val1 incorrecto\n");
        }

        if (val2 == 1)
        {
            success = true && success;
            printf("val2 correcto, continue\n");
        }
        else
        {
            success = false && success;
            printf("val2 incorrecto\n");
        }

    } while (success == false);
}