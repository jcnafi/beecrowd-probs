#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int check_V(char c)
{
    int low = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    int up = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (low || up)
        return 0;
    return 1;
}

int main() 
{
    int n;
    scanf("%d", &n);

    char str[40];
    while (n) {
        scanf("%s", str);
        int len = strlen(str) - 3;
        int var = 0;
        char ch;

        printf("%d\n", len);

        for (int i = 0; i < len; i++) {
            if (check_V(str[i]))
                if (check_V(str[i+1]))
                    if (check_V(str[i+1])) {
                        printf("%s nao eh facil\n");
                        var = 1;
                        break;
                    }
        }
        if (!var) printf("%s eh facil\n");
        n--;
    }

    return 0;
}

