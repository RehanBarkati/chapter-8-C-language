# include<stdio.h>
int occurence(char st[], char c){
   char *ptr=st;
   int count=0;
   while(*ptr!='\0'){
     if(*ptr==c){
       count++;
     }
     ptr++;
   }
  return count;
}
int main(){
   char st[]="mohammad";
    int count= occurence(st,'m');
   printf("The character 'm' occurs for %d times",count);

    return 0;
}