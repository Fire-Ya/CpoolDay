void print_char(char c);
void my_print_n_ascii(int howMany){
    for (int n = 33; n<howMany+33; n+=1) {
        print_char(n);
    }
}