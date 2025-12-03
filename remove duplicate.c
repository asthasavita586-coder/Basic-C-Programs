#include <stdio.h>
#include <string.h>
void remove_duplicate_characters(char *str) {
    if (str == NULL) {
        return; // Handle null pointer case
    }
    int seen[256] = {0};
    int read_index = 0;
    int write_index = 0;
    while (str[read_index] != '\0') {
        unsigned char current_char = (unsigned char)str[read_index];
        if (seen[current_char] == 0) {
            seen[current_char] = 1;
            str[write_index] = str[read_index];

            write_index++;
        }
        read_index++;
    }
    str[write_index] = '\0';
}
int main() {
    char string1[] = "programming";
    char string2[] = "Hello World";
    char string3[] = "aabbccdeeffgghh";
    char string4[] = "Python is Fun";

    printf("Original String 1: '%s'\n", string1);
    remove_duplicate_characters(string1);
    printf("Result String 1:   '%s'\n", string1);
    printf("--------------------\n");

    printf("Original String 2: '%s'\n", string2);
    remove_duplicate_characters(string2);
    printf("Result String 2:   '%s'\n", string2);
    printf("--------------------\n");

    printf("Original String 3: '%s'\n", string3);
    remove_duplicate_characters(string3);
    printf("Result String 3:   '%s'\n", string3);
    printf("--------------------\n");

    printf("Original String 4: '%s'\n", string4);
    remove_duplicate_characters(string4);
    printf("Result String 4:   '%s'\n", string4);
       return 0;
}

