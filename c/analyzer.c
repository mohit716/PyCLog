#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("No log file provided.\n");
    return 1;
    }

    FILE *file = fopen(argv[1], "r");

    if (file == NULL){
        printf("Could not open file.\n");
        return 1;
    }

    char line[1024];

    int total = 0;
    int errors = 0;
    int warnings = 0;

    while (fgets(line, sizeof(line), file) != NULL ){
        total++;

        if (strstr(line, "ERROR") != NULL){
            errors++;
        }
        if (strstr(line, "WARNING") != NULL){
            warnings++;
        }
    }


    fclose(file);

    printf("total= %d\n", total);
    printf("errors=%d\n", errors);
    printf("warnings=%d\n", warnings);

    return 0;
}