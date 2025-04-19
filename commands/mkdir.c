#include <sys/stat.h>
#include <stdio.h>

void handle_mkdir(char *dirname) {
    if (mkdir(dirname, 0755) != 0) {
        perror("mkdir");
    }
}
