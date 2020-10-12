#include"3-1.h"
int main(void){
	FILE *fp;
	int fd = open("./test1.txt",O_RDWR);
	fp = fdopen(fd,"w+");
	fprintf(fp,"test data %s\n","wahaha2312");
	fclose(fp);
	return 0;
}
