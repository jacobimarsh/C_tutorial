#include <stdio.h>

int main() {


    // Write a file

    FILE *pFile = fopen("output.txt", "w");

    if (pFile == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    
    char text[] = "Charon\n       Typewritin\n";

    fprintf(pFile, "%s", text);

    printf("Wrote to file successfully\n");

    fclose(pFile);
    
    
    // Read from file

    char buffer[1024] = {0};
    
    FILE *pFileRead = fopen("output.txt", "r");

    if (pFileRead == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    while(fgets(buffer, sizeof(buffer), pFileRead) != NULL){
        printf("%s", buffer);
    }

    fclose(pFileRead);

    return 0;
}