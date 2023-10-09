#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inputFile, *outputFile;
    
    inputFile = fopen("/home/serhat/Documents/libsvm/train_dataset1", "r");

    
    outputFile = fopen("output.txt", "w");

    
    char line[100]; 
    while (fgets(line, sizeof(line), inputFile)) {
        char firstColumn[100]; 
        if (sscanf(line, "%s", firstColumn) == 1) {
            fprintf(outputFile, "%s\n", firstColumn);
        }
    }
    
    fclose(inputFile);
    fclose(outputFile);
    
    printf("First columns extracted and saved to 'output.txt'\n");
    
    return 0;
}