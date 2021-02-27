# include<stdio.h>

// encrypt and decrypt;

// void encrypt(char *c){
//     char *ptr=c;
//     while(*ptr!='\0'){
//         *ptr=*ptr + 1;
//         ptr++;
//     }
// }
// int main(){
//     char c[]="Go and play";
//     encrypt(c);
//     printf("Encryted value of c : %s",c);
//     return 0;
// }



void decrypt(char *c){
    char *ptr=c;
    while(*ptr!='\0'){
        *ptr=*ptr - 1;
        ptr++;
    }
}
int main(){
    char c[]="Hp!boe!qmbz";
    decrypt(c);
    printf("decryted value of c : %s",c);
    return 0;
}