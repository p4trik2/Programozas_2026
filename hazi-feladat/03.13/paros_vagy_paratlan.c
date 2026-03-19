#include <stdio.h>

int is_even(int n);
int is_odd(int n);

int is_even(int n)
{
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}

int is_odd(int n)
{
    return !is_even(n);
}

int main()
{
    int x;

    printf("Adj meg egy egesz szamot: ");
    scanf("%d", &x);

    if (is_even(x))
        printf("A szam paros.\n");
    else
        printf("A szam paratlan.\n");

    return 0;
}