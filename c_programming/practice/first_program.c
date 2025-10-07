// AT 6th first C program
#include <stdio.h>


int main (void) {
    printf("Please enter your name: ");
    char name[50];
    scanf("%s", name);

    printf("Hello, %s! Welcome to your first C program.\n", name);
    return 0;
}