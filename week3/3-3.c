#include"3-1.h"
int main(void){
	FILE *fp;
 	char buf[80];
	int ret;
	memset(buf,0,sizeof(buf));
	if((fp = fopen("test1.txt","w")) == NULL ){
		perror("Open error\n");
	}
	fgets(buf,sizeof(buf),stdin);
	printf("actual reading chars from input is %s",buf);
	ret = fwrite(buf,sizeof(char),sizeof(buf),fp);
	printf("\n%d",ret);
	fclose(fp);
	return 0;
	
}
