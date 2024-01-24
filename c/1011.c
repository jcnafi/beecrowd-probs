#include <stdio.h>

int main()
{
    double Const = (4.0/3.0) * 3.14159;
    double R;

    scanf("%lf", &R);
    R = R*R*R * Const;

    printf("VOLUME = %0.3lf\n", R);

	return 0;
}

