// AT 6th time of day practice
#include <stdio.h>
#include <string.h>
int main(void){
    int time;
    printf("what hour is it in military time?: ");
    scanf("%d", &time);
    if (time >= 18)
        printf("good evening");
    else if (time >= 12)
        printf("good afternoon");
    else if (time <= 11)
        printf("good morning");
    return 0;
    

}