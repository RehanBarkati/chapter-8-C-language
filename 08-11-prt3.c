# include<stdio.h>
int strlen(char *st){
    char *ptr=st;
    int len=0;
    while( *ptr!='\0'){
            ptr++;
            len++;
    }
      return len;
}

int main(){
    char st[]="Rehan";
    strlen(st);
    printf("The length of string is %d",strlen(st));
    return 0;
}