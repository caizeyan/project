#include"4.h"
int main(void){
	int d1,d2;
	d1 = open("test4.txt",O_WRONLY|O_CREAT,0644);
	d2 = open("test4.txt",O_WRONLY|O_CREAT,0644);
	   write(d1,"abc",3);
	  lseek(d2,3,SEEK_SET);
	   write(d2,"cde",3);
	close(d2);
	close(d1);
}
