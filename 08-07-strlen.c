# include<stdio.h>
# include <string.h>

int main(){
    //char *st="Rehan";
      char st[]="Rehan";
    strlen(st);

    // ***strlen count the lenght of string excluding the null character***;
    
    printf("The length of string is %d",strlen(st));
    return 0;
}