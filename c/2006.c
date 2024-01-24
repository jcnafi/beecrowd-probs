#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    int ara[5], correct = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &ara[i]);
        if (ara[i] == T)
            correct++;
    }
    printf("%d\n", correct);

	return 0;
}

