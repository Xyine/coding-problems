#include <stdio.h>

char* convertToTitle(int columnNumber) {
    char buffer[40];
    int index = 0;

    while (columnNumber > 0) {
        columnNumber--;

        int remainder = columnNumber % 26;
        buffer[index] = 'A' + remainder;
        index++;
        columnNumber /= 26;
    }
    char* title = malloc((index + 1) * sizeof(char));
    if (title == NULL) {
        return NULL;
    }
    for (int i = 0; i < index; i++) {
        title[i] = buffer[index - 1 - i];
    }
    title[index] = '\0';
    return title;
}
