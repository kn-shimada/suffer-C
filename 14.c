#include <stdio.h>
 
int main(void) {
    char last_name[810];
    char first_name[810];
    char name[1919];

    printf("Last Name : ");
    scanf("%s", &last_name);

    printf("First Name : ");
    scanf("%s", &first_name);

    sprintf(name, "%s%s\n", last_name, first_name);
    printf("You are %s", name);

    return 0;
}