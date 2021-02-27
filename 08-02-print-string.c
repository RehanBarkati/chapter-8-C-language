# include<stdio.h>

int main(){
    char str[]="Rehan";
    // char *ptr=str;
    // while(*ptr!='\0'){
    //     printf("%c",*ptr);
    //     ptr++;
    int i=0;
    while(i<=4){
        printf("%c",str[i]);
        i++;
    }
    return 0;
}