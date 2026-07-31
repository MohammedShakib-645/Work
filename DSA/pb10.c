#include <stdio.h>

int main()
{
    int n, key, i, found = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    int roll[n];

    printf("Enter roll numbers:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &roll[i]);

    printf("Enter roll number to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(roll[i] == key)
        {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Student Found");
    else
        printf("Student Not Found");

    return 0;
}