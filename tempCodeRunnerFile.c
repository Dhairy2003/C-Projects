#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(){
   char ch;
   int count=0;
   FILE *fp,*fp1;
   fp=fopen("/Users/dhairyshrivastava/Desktop/Dhairy/Source.txt","r");
   fp1=fopen("/Users/dhairyshrivastava/Desktop/Dhairy/copiedfile.txt","w+");
   if(fp==NULL){
    printf("cant be opened!");
    return 1;
   } 
   while((ch=fgetc(fp))!=EOF){
       fputc(ch,fp1);
       count++;
   }
   printf("copying done successfuly");
   printf("length of file: %d\n\n",count);
   printf("review of copied file:\n\n\n");

   rewind(fp1);
   while(((ch=fgetc(fp1)))!=EOF){
       printf("%c",ch);
   }
   fclose(fp);
   fclose(fp1);
   return 0;

}