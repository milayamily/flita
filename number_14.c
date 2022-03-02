#include <stdio.h>
#include <math.h>

int bonitas(int x)
{
    int i, b, c = 0;
    for (i = 0; x > 0; i++)
    {
        b = x % 2;
        x = (x - b) / 2;
        c += b * pow(10, i);
    }
}
int main()
{
    int i, j = 0, massive[100];
    printf("Сколько чисел хотите ввести?(макс 100):\n");
    scanf("%d", &j);
    if (j > 100)
        j = 100;
    else if (j == 0)
    {
        printf("Ошибка при вводе значения, поробуйте снова)");
        return 0;
    }
    else if (j < 0)
        j = j * (-1);
    printf("Десятичные числа:\n");
    for (i = 0; i < j; i++)
    {
        printf("%d элемент => ", i);
        scanf("%d", &massive[i]);
    }
    printf("Двоичные числа:\n");
    for (i = 0; i < j; i++)
    {
        printf("%d элемент => ", i);
        printf("%d\n", bonitas(massive[i]));
    }
}
