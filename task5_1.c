// Необходимо составить функцию, которая определяет, сколько зерен попросил
// положить на N-ую клетку изобретатель шахмат (на 1-ую – 1 зерно, на 2-ую – 2
// зерна, на 3-ю – 4 зерна, …)
#include <stdio.h>
#include <locale.h>
#include <inttypes.h>
#include <stdint.h>
uint64_t shah(int num)
{
    uint64_t res=1;
    for (int i = 1; i <= num; i++)
    {
        res=res*2;
    }
    return res;
}

int main(void)
{
    int x;
    printf("Введите  целое числ0: ");
    scanf("%d", &x);

    printf("Количество зерен на %d-й клетке: %"PRIu64" шт", x, shah(x));
    return 0;    
}
   