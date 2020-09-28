#include"2-2.h"

int main(void){
	int ret;
	printf("2-2 is running\n");
	sleep(20);
	ret = write(1,"hello world!\n",13);
	exit(0);

}
