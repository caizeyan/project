#include"3-1.h"
int main(int arg,char* args[]){
	FILE *fp;
 	//char buf[80];
	//int ret;
	//memset(buf,0,sizeof(buf));
	if((fp = fopen("test1.txt","w+")) == NULL ){
		perror("Open error\n");
	}
	//fgets(buf,sizeof(buf),stdin);
	for(int i=0; i<arg;i++){
	fwrite(args[i],sizeof(char),sizeof(args[i]),fp);
	fwrite("\n",sizeof(char),sizeof("\n"),fp);
	}
	//fwrite(buf,sizeof(char),sizeof(buf),fp);
	//printf("\n%d",ret);
	fclose(fp);
	return 0;
	
}
