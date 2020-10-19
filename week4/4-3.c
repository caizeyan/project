#include"4.h"
int main(void){
	int d1,d2;
	d1 = open("test3.txt",O_WRONLY|O_CREAT|O_APPEND);
	d2 = open("test3.txt",O_WRONLY|O_CREAT|O_APPEND);
	for(int i=0; i<3; i++){
	   write(d1,"abc",3);
	   write(d2,"cde",3);
	}
	close(d2);
	close(d1);
}
