#include <stdio.h>
int main() {
    char s[101];
    fgets(s, 101, stdin);
    int at = -1;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '@')
            at = i;
        if (s[i] == '\n')
            s[i] = '\0';
    }
    for (int i = 1; i < at - 1; i++)
        s[i] = '*';
    printf("%s", s);
    return 0;
}
