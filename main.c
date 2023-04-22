#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void copyTextFiles(FILE* in, FILE* out)
{
    char buff[1024];
    while(fscanf(in, "%1023[^\n]%*[\n]", buff) == 1) {
        fprintf(out, "%s\n", buff);
    }
}

int main(int argc, char* argv[])
{
    char * l = setlocale(LC_ALL, "");
    if (!l) {
        perror("setlocale");
        return 1;
    }
    printf("Locale selected: %s\n", l);
    FILE *file = fopen("example_utf-8.txt", "rt+, ccs=UTF-8");
    if (!file) {
        perror("example_utf-8.txt");
        return 2;
    }
    printf("File was opened\n");
    copyTextFiles(file, stdout);
    fclose(file);
    printf("Done\n");
}
