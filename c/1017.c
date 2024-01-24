#include <stdio.h>

int main()
{
    int t, v, s;
    scanf("%d", &t);
    scanf("%d", &v);

    s = v*t;
    printf("%0.3lf\n", s/12.0);

	return 0;
}

