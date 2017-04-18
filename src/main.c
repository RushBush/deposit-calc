#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum, time;
    printf("Введите сумму вклада"
           " ");
    scanf("%d", &sum);
    while (sum < 10000) {
        printf("Неверная сумма \n Повторите ввод "
               " ");
        scanf("%d", &sum);
    }
    printf("Введите срок вклада "
           " ");
    scanf("%d", &time);
    while (time < 1 || time > 365) {
        printf("Сумма вклада не может быть больше 365 дней и меньше 1 дня \n");
        printf("Повторите ввод "
               "");
        scanf("%d", &time);
    }
    if (sum < 100000) {
        if (time > 0 && time < 31)
            printf("Сумма с процентами=%.2f", (float)sum * 0.9);
        if (time > 30 && time < 121)
            printf("Сумма с процентами=%.2f", (float)sum * 1.02);
        if (time > 120 && time < 241)
            printf("Сумма с процентами=%.2f", (float)sum * 1.06);
        if (time > 240 && time < 366)
            printf("Сумма с процентами=%.2f", (float)sum * 1.12);
    } else {
        if (time > 0 && time < 31)
            printf("Сумма с процентами=%.2f", (float)sum * 0.9);
        if (time > 30 && time < 121)
            printf("Сумма с процентами=%.2f", (float)sum * 1.03);
        if (time > 120 && time < 241)
            printf("Сумма с процентами=%.2f", (float)sum * 1.08);
        if (time > 240 && time < 366)
            printf("Сумма с процентами=%.2f", (float)sum * 1.15);
    }
    return 0;
}
