#include <stdio.h>
#include <string.h>

int check_v(char c)
{
    int low, up;
    low = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    up = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (low || up)
        return 0;
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n); 

    char name[42];
    int var, len;
    while (n) {
        // add a white space to deal with the 
        // trailing newline from previous scanf input
        scanf(" %s", name);
        len = strlen(name) - 2;
        for (int i = 0; i < len; i++) {
            var = 0;
            if (check_v(name[i]))
                if (check_v(name[i+1]))
                    if (check_v(name[i+2])) {
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

