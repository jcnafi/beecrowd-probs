#include <stdio.h>

int main()
{
    double A, B, C;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    A = A * 2.0;
    B = B * 3.0;
    C = C * 5.0;

    double MEDIA = (A+B+C)/10.0;

    printf("MEDIA = %0.1lf\n", MEDIA);

	return 0;
}

