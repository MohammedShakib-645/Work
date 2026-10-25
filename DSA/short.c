//String processing 
//A Cybersecurity firm needs to mask user emails for privacy you must replace all characters in the username (before @) with "*"except for the first and last characters
// constraints:
// string  length 3<=|s|<=100
// the input always contains exactly one @
#include <stdio.h>
#include <string.h>
int main() {
    char email[101];
    scanf("%100s", email); // Read input email, limit to 100 characters

    int atIndex = -1;
    int length = strlen(email);

    // Find the index of '@'
    for (int i = 0; i < length; i++) {
        if (email[i] == '@') {
            atIndex = i;
            break;
        }
    }

    // Mask the username part
    for (int i = 1; i < atIndex - 1; i++) {
        email[i] = '*';
    }

    printf("%s\n", email); // Output the masked email
    return 0;
}