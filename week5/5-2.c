#include"5.h"

int main(){
 int fd;
 FILE *fp;
 char *s = "Hello World";
 if((fd = open("./test1.txt",O_CREAT|O_WRONLY,0644))==-1){
    printf("error to creat"); 
    exit(1);
 }
 if((fp = fopen("./test2.txt","w+")) == NULL){
    printf("error to create file!\n");
    exit(1);
 }
 sleep(15);
 write(fd,s,strlen(s));
 fwrite(s,sizeof(char),strlen(s),fp);
 printf("after write\n");
 sleep(15);
 printf("over");
 close(fd);
 return 0;
}
