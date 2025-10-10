//AT 6th silly sentences

#include <stdio.h>
#include <string.h>

int main(void){
    char name[100];
    char limb[25];
    char animal[25];

    printf("Please enter your name: ");
    scanf("%s", name);
    printf("Please enter an animal: ");
    scanf("%s", animal);
    printf("Please enter a limb: ");
    scanf("%s", limb);

    printf(" %s had went on a a walk with their %s till they tripped over a stray %s\n", name, animal, limb);
    printf(" %s was walking their %s when they fell and broke their %s\n", name, animal, limb);
    printf(" %s and their %s were walking when they both tripped over a rock and broke their %s\n", name, animal, limb);
    return 0;
}
