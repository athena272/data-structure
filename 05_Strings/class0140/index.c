#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char palavra[50] = {"Bom dia simpatia!"};

    printf("\nAntes: %s\n", palavra);

    strupr(palavra);
    printf("\nMaiúsculas: %s\n", palavra);

    strlwr(palavra);
    printf("\nMinúsculas: %s\n", palavra);

    return 0;
}

// #include <stdio.h>
// #include <ctype.h>

// int main (){

//     // converte um caracter para minúsculo
//    printf ("tolower(A) = %c\n", tolower('A'));
   
//    // converte um caracter para maiúsculo
//    printf ("toupper(A) = %c", toupper('a'));
   
//    return 0;
// }