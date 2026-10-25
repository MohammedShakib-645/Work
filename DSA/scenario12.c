#include <stdio.h>
#include <ctype.h>
int main() {
    char s[201];
    fgets(s, sizeof(s), stdin);
    int i, j = 0;
    int hyphen = 0;
    for (i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        if (isalnum(ch)) {
            s[j++] = tolower(ch);
            hyphen = 0;
        }
        else {
            if (j > 0 && !hyphen) {
                s[j++] = '-';
                hyphen = 1;
            }
        }
    }
    if (j > 0 && s[j - 1] == '-') {
        j--;
    }
    s[j] = '\0';
    printf("%s", s);
    return 0;
}