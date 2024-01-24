#include <stdio.h>

int main()
{
    int age;
    scanf("%d", &age);

    int part = age / 365;
    age = age % 365;
    printf("%d ano(s)\n", part);

    part = age / 30;
    age = age % 30;
    printf("%d mes(es)\n", part);
    printf("%d dia(s)\n", age);


	return 0;
}

