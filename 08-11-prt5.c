# include<stdio.h>
char fun(char *st1, char *st2){
    
    int i=0;
    while(i<=4){
        st2[i]=st1[i];
        i++;
    }
    st2[i]='\0';
}
int main(){
    char st1[]="Rehan";
    char st2[10];
   fun(st1,st2);
    printf("The value of st2 is %s",st2);

    return 0;
}