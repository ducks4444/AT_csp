// AT 6th family assignment
#include <stdio.h>

int main() {
    char *family[] = {"mike", "reia", "thor"};
    for (int i = 0; i < 3; i++)
        printf("Hi %s!\n", family[i]);
    return 0;
}
