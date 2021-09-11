#include <stdio.h>

/* furmula de F a C "ºC = (ºF -32) / (9/5)"  -> ºC = (ºF -32) / 1,8 */

int main()
{
    printf("ejercicio 1.3\n");
    float farh, celsius; /* test */
    float min, max, scale;

    min = 0;
    max = 80;
    scale = 5;

    farh = min;
    while (farh <= max)
    {
        celsius = (farh - 32) / 1.8;
        printf("%f,\t,%f,\n", farh, celsius);
        farh = farh + scale;
    }
    printf("ahora de celsius a far, y mas simple..\n");
    /* F=(C*1.8)+32*/
    float cel, far;
    cel = -17.777777;
    while (cel <= 80)
    {
        far = (cel * 1.8) + 32;
        printf("%f,\t,%f,\n", cel, far);
        cel += 5;
    }
}
