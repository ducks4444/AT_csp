// AT 6th expressions practice
#include <stdio.h>
#include <math.h>
int main (void){
    int year = 2025; //whole numbers
    float pi = 3.14; //decimals
    double long_pi = 3.14159265359; // decimals that are 2x as long
    printf("8/3 = %f\n", (float) 8/3); //cast is specifilly starting the data type
    printf("8/3 = %2.2f\n", 8/3.0);
    printf("2 ^ 4 = %d\n", pow (2,4));
    printf("7-24/8*4+6 = %d\n", 7-24/8*4+6);
    printf("18/3-7+2*5 = %d\n", 18/3-7+2*5);
    printf("6*4/12+72/8-9 = %d\n", 6*4/12+72/8-9);
    printf("(17-6/2)+4*3 = %d\n", (17-6/2)+4*3);
    printf("-2(1*4-2/2)+(6+2-3) = %d\n", -2*(1*4-2/2)+(6+2-3));
    printf("-1*[(3-4*7)/5]-2*24/6 = %d\n", -1*[(3-4*7)/5]-2*24/6);
    


    return 0;

}