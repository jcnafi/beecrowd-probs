#include <stdio.h>

int main()
{
    int a, b;
    double A, B;

    scanf("%d %d %lf", &a, &a, &A);
    scanf("%d %d %lf", &b, &b, &B);

    double amount = a*A + b*B;

    printf("VALOR A PAGAR: R$ %0.2lf\n", amount);

	return 0;
}

