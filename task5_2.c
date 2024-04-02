//  Составить функцию, которая определяет наибольший общий делитель двух
//  натуральных и привести пример ее использования

#include <stdio.h>
#include <locale.h>
int nod(int x, int y)
{
    while (x!=0 && y!=0)
    {
        if (x>y) x = x%y;
        else y = y%x;
    }
    return x+y;
}

int main(void)
{
    int a,b;
    printf("Введите 2 целых числа через пробел: ");
    scanf("%d %d", &a, &b);

    printf("Наибольший общий делитель чисел %d и %d: %d \n", a, b, nod(a,b));
    return 0;    
}
   