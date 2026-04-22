int romanToInt(char *s) {
    int values[256] = {0};
    values['I'] = 1;
    values['V'] = 5;
    values['X'] = 10;
    values['L'] = 50;
    values['C'] = 100;
    values['D'] = 500;
    values['M'] = 1000;

    int total = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i + 1] != '\0' && values[(unsigned char)s[i]] < values[(unsigned char)s[i + 1]]) {
            total -= values[(unsigned char)s[i]];
        } else {
            total += values[(unsigned char)s[i]];
        }
    }

    return total;
}
