#include <stdio.h>
#include <math.h>

int main()
{
    double x1, y1, x2, y2;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    double x = x2-x1;
    x *= x;
    double y = y2-y1;
    y *= y;

    double s = sqrt(x+y);

    printf("%0.4lf\n", s);

	return 0;
}

