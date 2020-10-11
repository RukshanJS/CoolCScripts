#include <stdio.h>
#include <string.h>

int main() {
    //reading file
    const char filename[] = "../read.txt"; //file location
    FILE *file = fopen(filename, "r"); //create file pointer
    char temp_line[100];
    char line[100]; //temporary to hold each line

    //writing file
    const char write_filename[] = "../write.txt";
    FILE *write_file = fopen(write_filename, "w");

    while (fgets(line, sizeof line, file) != NULL) { //read from file line-wise
        line[strlen(line) - 1] = '\0';
        strcpy(temp_line, line);
        if (!strncmp(line, strrev(temp_line), strlen(temp_line))){
            fprintf(write_file, "%s\n", line); //write to write.txt if palindrome
        }
    }
    return 0;
}