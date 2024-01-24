#include <stdio.h>

int main()
{
    char name[100];
    fgets(name, 100, stdin);

    double fxd_salary, month_total;
    scanf("%lf", &fxd_salary);
    scanf("%lf", &month_total);

    month_total = month_total * 0.15;

    printf("TOTAL = R$ %0.2lf\n", (fxd_salary+month_total));

	return 0;
}

