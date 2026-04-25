#include <stdlib.h>
#include <string.h>

char* addBinary(char* a, char* b) {
    int lenA = strlen(a);
    int lenB = strlen(b);

    int i = lenA - 1;
    int j = lenB - 1;
    int carry = 0;

    int maxLen = lenA > lenB ? lenA : lenB;
    char* result = malloc(maxLen + 2);

    result[maxLen + 1] = '\0';

    int k = maxLen;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';

        result[k--] = (sum % 2) + '0';
        carry = sum / 2;
    }

    if (k == -1) {
        return result;
    }

    memmove(result, result + k + 1, maxLen - k + 1);
    return result;
}
