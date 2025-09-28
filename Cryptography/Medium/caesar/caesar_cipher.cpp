#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

void caesar_cipher(char *text){
    int length = strlen(text);
    for (int i = 0; i < 26; i++){
        printf("ROT-%d: ", i);
        for (int j = 0; j < length; j++){
            char alphabet = tolower((unsigned char)text[j]);

            if ((static_cast<int>(alphabet) + i) <= 122){ // 122 = 'z'
                alphabet = alphabet + i;
            } else{
                alphabet = alphabet + i - 26;
            }
            
            if (static_cast<int>(text[j]) < 97){
                printf("%c", alphabet - 32); //uppercase
            } else{
                printf("%c", alphabet); // lowercase
            }
        }
        printf("\n");
    }
    
    
}

int main(){
    char text[1000];
    printf("Enter text: ");
    scanf(" %[^\n]", text);
    // printf("%s", text);
    caesar_cipher(text);

    return 0;
}