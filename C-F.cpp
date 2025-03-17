#include <stdio.h>
int main()
{
float celsius;
float fahrenheit;
printf("Quanto esta medindo a temperatura em graus celsius:");
scanf("%f", &celsius);
fahrenheit = (celsius*9/5) +32;
printf("Sua temperatura em fahrenheit e %2.f", fahrenheit);
}
