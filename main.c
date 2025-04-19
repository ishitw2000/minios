//
// Created by Ishitwa Agarwal on 20/04/25.
//
#include <stdio.h>
#include <string.h>
#include "shell.h"

#define MAX_INPUT 1024

int main(){
    char input[MAX_INPUT];
    printf("Welcome to MiniOS!\n Type 'exit' to exit\n");
    while(1){
        printf("miniOS >");
        fgets(input, MAX_INPUT, stdin);
        input[strcspn(input, "\n")] = 0;  // remove newline
        if (strcmp(input, "exit") == 0) break;
        execute_command(input);
    }
    return 0;
}