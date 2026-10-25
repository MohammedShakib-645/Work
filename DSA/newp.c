//String processing 
//A Cybersecurity firm needs to mask user emails for privacy you must replace all characters in the username (before @) with "*"except for the first and last characters
// constraints:
// string  length 3<=|s|<=100
// the input always contains exactly one @
#include<stdio.h>
#include<string>
int main(void){
    char email[100];
    scanf("%99s",email);
    int  atIndex = -1;
    int length=strlen(email);
      for (int i = 0;i<length; i++){
        if (email[i] == '@') {
            atIndex = i;
            break;
        }
    }

    for (int i = 1; i < atIndex - 1; i++) {
        email[i] = '*';
    }
    printf("%s\n", email); 
    return 0;
}
