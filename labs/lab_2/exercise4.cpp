// Gregory Kelleher 14478352

#include <iostream>

using namespace std;

int my_string_len(char str[]);
void my_string_cat(char* dest, char* src, int dest_size);

int main(void) {

    char word_1[12] = "hello";
    char word_2[6] = "world";

    /* to get real size of array */

    cout << "word_1 length: " << my_string_len(word_1) << '\n';
    cout << "word_2 length: " << my_string_len(word_2) << '\n';

    int concat_len = my_string_len(word_1) + my_string_len(word_2);

    cout << "combined length of word_1 and word_2: " << concat_len << '\n';
    cout << "concatenated string is: ";
    my_string_cat(word_1, word_2, sizeof(word_1));

    return 0;
}

void my_string_cat(char* dest, char* src, int dest_size) {

    int index = 0;
    int concat_len = my_string_len(src) + my_string_len(dest);

    if (concat_len < dest_size + 1) {
        for(int i = 0; i < dest_size; i++) {
            if(dest[i] == '\0') {
                for (int j = i; j < dest_size; j++) {
                    if(src[index] != '\0') {
                        dest[j] = src[index]; 
                        index++;
                    }
                }
            }
        }
        for(int i = 0; i < dest_size; i++) { 
            cout << dest[i]; 
        }
        cout << '\n';
    }
    else if(concat_len > dest_size) { 
        cout << "dest string does not have enough capacity to store both strings" << '\n';
    }

}

int my_string_len(char str[]) {

    /* to get actual size of array */

    int count = 0;
    for(int i=0; str[i]!='\0'; i++) { count++; }
    return count + 1;

}
