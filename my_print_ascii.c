void print_char(char c);
void my_print_ascii(){
    for (int i = 33; i<127; i+=1) {
        print_char(i);
    }
}