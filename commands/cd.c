#include <unistd.h>
#include <stdio.h>

void handle_cd(char *path) {
    if (chdir(path) != 0) {
        perror("cd");
    }
}
