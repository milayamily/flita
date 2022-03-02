#include <stdio.h>
#include <math.h>

int bonitas(int x)// функция перевода из 10-й в 2-ю систему исчисления
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
    else if (j == 0)// такой вывод будет, если ввести буквы в строку ввода
    {
        printf("Ошибка при вводе значения, поробуйте снова)");
        return 0;
    }
    else if (j < 0) // если введено будет отрицательное число то оно будет считаться по модулю
        j = j * (-1);
    printf("Десятичные числа:\n");
    for (i = 0; i < j; i++) // записьь в массив 10-ых чисел, а потом вывод массива
    {
        printf("%d элемент => ", i);
        scanf("%d", &massive[i]);
        if (massive[i] < 0) massive[i] = massive[i] * (-1);
    }
    printf("Двоичные числа:\n");
    for (i = 0; i < j; i++) // вывод массива 2-х чисел
    {
        printf("%d элемент => ", i);
        printf("%d\n", bonitas(massive[i]));
    }
}
