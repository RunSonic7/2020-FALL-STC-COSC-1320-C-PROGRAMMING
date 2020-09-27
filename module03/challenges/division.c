#include <stdio.h>

int main(void)
{

float gallonsEntered;
float milesDrivenEntered;
float a;
float b = 2.0;

scanf("%f", &gallonsEntered);
scanf("%f", &milesDrivenEntered);

float quotient = 0.0;

quotient = milesDrivenEntered / gallonsEntered;

printf("%f", quotient);
    return 0;
}