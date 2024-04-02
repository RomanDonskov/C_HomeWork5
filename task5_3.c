// Составить логическую функцию, которая определяет, верно ли, что в заданном
// числе сумма цифр равна произведению.

#include <stdio.h>
#include <locale.h>

int is_happy_number(int n)
{
    int sum = 0, mult = 1;
    while (n)
        {
            sum+=n%10;
            mult*=n%10;
            n = n/10;
        }
    if (sum == mult) return 1;
        else return -1;
}

int main(void)
{
    int x;
    printf("Введите  целое положительное числ0: ");
    scanf("%d", &x);
    if (is_happy_number(x) == 1)
        printf("YES");
    else
        printf("NO");
    
    return 0;    
}
   