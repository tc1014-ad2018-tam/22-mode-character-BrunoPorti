//Bruno Portilla Hinojosa
//ITESM
#include <stdio.h>
#include <string.h>
int main() {
    char phr[200];  //asigno variables.
    int count = 0;
    int letters = 0;
    int mode= phr[0];
    printf("In this program you can enter any phrase and i will tell whats the most repeated character in it.\nEnter a phrase:\n");
    gets(phr); //pido frase

    for (int i = 0; i < strlen(phr); i++) {
        for (int j = i + 1; j < strlen(phr); j++) {     //veo los caracteres sin espacios
            if (phr[i] == phr[j] && phr[i] != ' ') {
                letters++;
            }
        }
        if (letters > count) {
            count = letters;
            mode = phr[i];

        }
    }
    printf("The most repeated character in your phrase is %c.", mode); //muestro el caracter mas repetido.
}