// AT 6th old enough assignment

#include <stdio.h>
#include <string.h>

int main(void){
    int age;
    printf("how old are you? :");
    scanf("%d", &age);
    if (age >= 18)
    printf("you are old enough to vote, drive, get a learners permit, and go to school ");
    else if (age >= 16)
    printf("you are old enough to drive, get a learners permit, and go to school ");
    else if (age >= 15)
    printf("you are old enough to get a learners permit, and go to school ");
    else if (age >= 5)
    printf ("you are old enough to go to school ");
    else if (age <= 4)
    printf("you cannot do anything ");
    return 0;
}
