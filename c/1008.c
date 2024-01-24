#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int hours;
    scanf("%d", &hours);
    double salary;
    scanf("%lf", &salary);

    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %0.2lf\n", (hours*salary));

	return 0;
}

