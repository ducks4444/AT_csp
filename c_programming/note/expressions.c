// AT 6th expression notes 

/// what is the difference between an integer and a float in C?
    // unless one of my soultions is a float i will always get intergers
//how does C handle interger division compared to float division
    // they will both end up the same soultion unless you make one a float
// list the arithemtic operator, and how is it used?
    // the percent sign gives modulo which is the remainder
// what is the modulus operator, and how is it used
    // it is a modulo operator and it is used as a remainder
//how do you round a float to the nearest interger in C
    // add float to your code examples are shown below
// what type is casting in C? provide an example
    //cast is specifilly starting the data type example down below
//how do compound assignment operators work in C, list three examples
    //moudulo, addition, subtraction
//what is the purpose of math.h libary
    // it provides math symbols in code and how to preform those things
//what happens when you mix a interger and float operations in C?
    // it will always end as a float
#include <stdio.h>
#include <math.h>

int main (void){
    int year = 2025; //whole numbers
    float pi = 3.14; //decimals
    double long_pi = 3.14159265359; // decimals that are 2x as long
    printf("8/3 = %f\n", (float) 8/3); //cast is specifilly starting the data type
    printf("8/3 = %2.2f\n", 8/3.0);
    printf("2 ^ 4 = %d\n", pow (2,4));

    year += 1;
    year ++;

    return 0;

}