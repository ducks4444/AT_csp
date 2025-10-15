// AT functions notes


//What a function is
    // a container space for code basically
//Why do we use functions
    // so we do not have to do long walls of code creates a shortcut
//How to write a function in C
    //look below essentially just make variables and such
//What are arguments and parameters?
    //storage for your function
//How do arguments and parameters work together?
    //they let you put in more information and variables and such
//How to use parameters and arguments in C
    // you can basically set anything in a parentheses  but you can start with print statements and code from there or something different
//What are return statements?
    //code that will replace a call
//How do return statements change how you define a function in C?
    // they will basically replace things and switch the code
//What do return statements do with the information?
    // they replace the call


#include <stdio.h>


void birthday(char* name, int age){ //the star says that it will take all the characters
    printf("happy birthday to you\n");
    printf("happy birthday to you\n");
    printf("happy birthday dear %s\n", "mykel");
    printf("happy birthday to you\n");
    printf("happy birthday %s is now %d\n", name, age);
}


int add(int num_one, int num_two){
    return num_one + num_two;
}


char* get_name(void){
    char *name[50];
    printf("what is your name: ");
    scanf("%s",name);
    return name;
}
float get_num(void){
    float num;
    printf("tell me a number\n");
    scanf("%f", &num);
    return num;
}


int main(void){
    birthday("mykel", 15);
    birthday("lucas", 45);
    birthday("victoria", 12);
    int addition = add(5,4);
    printf("%d\n", addition);
    printf("%d\n", add(50,37));
    float our_number = get_num();
    printf("%f\n", our_number);




    return 0;
}
