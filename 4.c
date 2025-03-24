#include <stdio.h>

int main() {
    int n;
    printf("Введите число: ");
    scanf("%d", &n);

    // Проверка положительное ли n число
    int plus = n > 0;
    
    // Проверка того, что побитовая операция AND между n и n - 1 равна нулю
    int is_power_of_two = !(n & (n - 1));
    
    int is_power_of_two_result = plus * is_power_of_two;
    
    // Для степени двойки вывод 1. Числа, не подходящие под условие, вывод - 0
    printf("%d\n", is_power_of_two_result);
    return 0;
}
