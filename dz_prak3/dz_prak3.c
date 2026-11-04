#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define AU_IN_LY 63241.077

int main() {
    setlocale(LC_ALL, ".UTF8");
    double ly;
    double au;

 

    puts("Введите число световых лет:");
    scanf("%lf", &ly);

    au = ly * AU_IN_LY;

    printf("%.2f св. лет = %.2f а. е.\n", ly, au);

    system("pause");
    return 0;
}