#include"3-1.h"
int main(){
	FILE *fp = fopen("./test1.txt","a+");
	char buf[800];
	memset(buf,0,sizeof(buf));
	fwrite("waahsahfasfas",sizeof(char),15,fp);
	fp = freopen("./test1.txt","r",fp);
	while(!feof(fp)){		
	fgets(buf,sizeof(buf),fp);	//once one row
	printf("%s\n",buf);
	}
	fclose(fp);
	return 0;
}
