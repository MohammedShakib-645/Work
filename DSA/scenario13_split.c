#include <stdio.h>
int main() {
    char s[201];
    fgets(s, 201, stdin);
    int n = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '\n')
            s[i] = '\0';
        n++;
    }
    int c = 1;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ':')
            c++;
    }
    printf("%d\n", c);
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ':')
            printf("\n");
        else
            printf("%c", s[i]);
    }
    return 0;
}
