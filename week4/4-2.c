#include"4.h"
char buf1[]="abcdefghij";
char buf2[]="1234567890";
int main(void){
	int fd = open("test2.txt",O_WRONLY|O_CREAT|O_APPEND,0644);
	if(fd <0){
 	   printf("error");
	   exit(1);
	}
	write(fd,buf1,10);
 	lseek(fd,40,SEEK_SET);
	write(fd,buf2,10);
	close(fd);
	
}
