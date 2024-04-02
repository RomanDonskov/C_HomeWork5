// Составить функцию, которая определяет сумму всех чисел от 1 до N и
// привести пример ее использования

#include <stdio.h>
#include <locale.h>

int sum_numbers(int n)
{
    int sum = 0;
    while (n)
        {
            sum+=n--;
        }
    return sum;
}

int main(void)
{
    int x;
    printf("Введите  целое положительное числ0: ");
    scanf("%d", &x);
    printf("Сумма чисел от 1 до %d равна %d", x, sum_numbers(x));
    
    return 0;    
}
   