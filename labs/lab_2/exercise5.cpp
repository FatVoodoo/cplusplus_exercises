// Gregory Kelleher 14478325

#include <iostream>

void print_string_array(char str[]);
void print_string_ptr(char *str);
int get_size(char str[]);

using namespace std;

int main(void) {

    char str[] = "the quick brown fox jumps over the lazy dog";
    print_string_array(str);
    print_string_ptr(str);

    return 0;
}

int get_size(char str[]) {

    int str_size = 0;

    for(int i=0; str[i]!='\0'; i++) { str_size++; }
    str_size += 1;  // increment once for null terminator

    return str_size;
}

void print_string_array(char str[]) {

    int str_size = get_size(str);
    for(int i = 0; i < str_size; i++) { cout << str[i]; }
    cout << '\n';
}

void print_string_ptr(char *str) {

    char *ptr;
    int str_size = get_size(str);
    ptr = str;

    for (int i=0; i<str_size; i++) { cout << *(ptr + i); }
    cout << '\n';
}
