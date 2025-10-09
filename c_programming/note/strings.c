// AT 6th strings notes

// what is the difference between a string and charecter
    // strings are very speficlly lists of charecters
// what types of quotation marks do we need for a string
    // double quotes ""
// what libary do we need to include to access the string functions in c?
    //
// list functions the libary allows us to use
    // string.h, get the length of string
// how do we concentrate strings in C?
    //
// how do we get indivuial charecters from a string in C?


#include <stdio.h>
#include <string.h>

int main(void){

    char name[100] = "xavier";
    char last_name[25];
    char full_name[100];

    printf("please tell me your last name");
    scanf("%s", last_name);

    printf("[%s]", name);

    strcat(full_name, name);
    printf("[%s]", name);


    strcat(name, " ");
    printf("[%s}", name);

    strcat(name, last_name);
    printf("[%s}", name);
// strcmp(last_name, "lasrose"); returns 0 if equal
    print("%zu\n", strlen(full_name));
    print("%zu\n", sizeof(full_name)); //sizeof doesnt count charecters its just how much space you sent to take




    return 0;
}