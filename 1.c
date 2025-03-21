#include <stdio.h>

int main() 
{
    float Celsius;
    printf("Введите температуру в градусах Цельсия ");
    scanf("%f", &Celsius);
    
    float Fahrenheit = (Celsius * 9 / 5) + 32;
    
    printf("C = %.0f ; F = %.2f", Celsius, Fahrenheit);
    return 0;
}
