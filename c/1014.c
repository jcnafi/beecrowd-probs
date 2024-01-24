#include <stdio.h>

int main()
{
    int dis; scanf("%d", &dis);
    double time; scanf("%lf", &time);
    double speed= dis/time;

    printf("%0.3lf km/l\n", speed);

	return 0;
}

