#include <stdio.h>

int main()
{
    int notes[] = {100, 50, 20, 10, 5, 2, 1};
    int n, times;
    scanf("%d", &n);

    printf("%d\n", n);
    for (int i = 0; i < 7; i++) {
        times = n / notes[i];
        n = n % notes[i];
        printf("%d nota(s) de R$ %d,00\n", times, notes[i]);
    }

	return 0;
}

