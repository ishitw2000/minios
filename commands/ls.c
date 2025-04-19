#include <dirent.h>
#include <stdio.h>

void handle_ls() {
    DIR *d;
    struct dirent *dir;
    d = opendir(".");

    if (d) {
        while ((dir = readdir(d)) != NULL) {
            printf("%s  ", dir->d_name);
        }
        printf("\n");
        closedir(d);
    } else {
        perror("ls");
    }
}
