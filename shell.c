#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "shell.h"

// Declare handlers
void handle_ls();
void handle_cd(char *path);
void handle_mkdir(char *dirname);

void execute_command(char *input) {
    char *cmd = strtok(input, " ");
    char *arg = strtok(NULL, " ");

    if (strcmp(cmd, "ls") == 0) {
        handle_ls();
    }
    else if (strcmp(cmd, "cd") == 0) {
        if (arg) handle_cd(arg);
        else printf("cd: missing operand\n");
    } else if (strcmp(cmd, "mkdir") == 0) {
        if (arg) handle_mkdir(arg);
        else printf("mkdir: missing operand\n");
    } else {
        printf("Unknown command: %s\n", cmd);
    }
}
