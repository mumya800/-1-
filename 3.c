#include <stdio.h>

int main() {
    int a, b, c;
    printf("Введите три числа: ");
    scanf("%d %d %d", &a, &b, &c);

    // Проверяем, есть ли ноль
    int zero = (a == 0 || b == 0 || c == 0);
    
    // Произведение положительное, если все переменные положительны либо если количество отрицательных чисел четное
    int number_sign = ((a > 0) * (b > 0) * (c > 0)) || ((a > 0) * (b < 0) * (c < 0)) || ((a < 0) * (b < 0) * (c > 0)) || ((a < 0) * (b > 0) * (c < 0));
    
    // При наличии нуля получаем выражение равное нулю, при положительном произведении выражение равно 1, при отрицательном -1
    int product_sign = zero * 1 + number_sign * 2 - 1;
    
    printf("%d\n", product_sign);
    return 0;
}
