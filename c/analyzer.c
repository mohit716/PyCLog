#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("No log file provided.\n");
    return 1;
    }
    printf("C received file: %s\n", argv[1]);

    return 0;
}