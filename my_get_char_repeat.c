void print_char(char c);
int my_get_char_repeat(char to_find, const char *to_search);
    int len = 0;
    while (origin[len] != '\0') {
        len++;
    }
    for (int i = 0; i < len; i++){
        if (origin[i] == toFind) {
            origin[i] = toReplace;
        }
    }
    return origin;