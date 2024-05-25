void print_char(char c);

void my_print_revert(char *toRevert) {
    int j = 0;
    while (toRevert[j] != '\0') {
        j++;
    }
    for (int i = j; i >= 0; i--)
    {
      print_char(toRevert[i]);
    } 
}