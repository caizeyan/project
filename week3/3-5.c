#include"3-1.h"
int main(void){
	FILE *fp;
	fp = fdopen(1,"w+");
	fprintf(fp,"test data %s\n","wahaha");
	fclose(fp);
	return 0;
}
