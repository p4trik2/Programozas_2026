#include <stdio.h>

int valid_triangle(double a, double b, double c)
{
    if (a <= 0 || b <= 0 || c <= 0)
        return 0;

    if (a + b > c && a + c > b && b + c > a)
        return 1;

    return 0;
}

int main()
{
    double a, b, c;

    printf("Add meg a haromszog harom oldalat: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (valid_triangle(a, b, c))
        printf("A haromszog megszerkesztheto.\n");
    else
        printf("A haromszog nem szerkesztheto meg.\n");

    return 0;
}