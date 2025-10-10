// AT 6th name decorator 

#include <stdio.h>

int main(void) {

    char name[30]; //you have to set a limit for the string first for the name

    printf("What is your first name: ");
    scanf("%s", name); //use %s for the string input

    printf(";) %s ;)\n", name);
    printf("*** %s ***\n", name);
    printf(":):) %s :):)\n", name); //print out the statments 

    return 0;
}
