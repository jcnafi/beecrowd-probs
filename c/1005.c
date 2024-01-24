#include <stdio.h>

int main()
{
    double A, B;
    scanf("%lf", &A);
    scanf("%lf", &B);

    A = A*3.5; B = B*7.5;
    double MEDIA = (A+B)/11.0;

    printf("MEDIA = %0.5lf\n", MEDIA);

	return 0;
}

