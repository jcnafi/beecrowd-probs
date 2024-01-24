#include <stdio.h>

int main()
{
    int time;
    scanf("%d", &time);

    int part = time / 3600;
    time = time % 3600;
    printf("%d:", part);

    part = time / 60;
    time = time % 60;
    printf("%d:%d\n", part, time);

	return 0;
}

