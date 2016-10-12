// Gregory Kelleher 14478352

#include <iostream>

using namespace std;

int my_string_len(char str[]);
void my_string_cat(char* dest, char* src, int dest_size);

int main(void) {

    char word_1[20] = "hello";
    char word_2[6] = "world";

    int dest_size = my_string_len(word_1);

    my_string_cat(word_1, word_2, dest_size);

    return 0;
}

void my_string_cat(char* dest, char* src, int dest_size) {
    
    int index = 0;

    for(int i = 0; i < dest_size; i++) {
        if(dest[i] == '\0') {
            for (int j = i; j < dest_size; j++) {
               dest[j] = src[index]; 
               index++;
            }
        }
    }

    for(int i = 0; i < dest_size; i++ ) {
        cout << dest[i]; 
    }

}

int my_string_len(char str[]) {

    int count = 0;

    for(int i=0; str[i]!='\0'; i++) { count++; }
  
    return count + 1;
}
