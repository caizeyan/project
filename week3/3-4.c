#include"3-1.h"
int main(int arg,char* args[]){
	FILE *fp;
	if((fp = fopen("test1.txt","w")) == NULL ){
		perror("Open error\n");
	}
	for(int i=0; i<arg;i++){
	//sizeof(args[i]) all is 8  it's *
	fwrite(args[i],sizeof(char),strlen(args[i]),fp);
	}
	fclose(fp);
	return 0;
	
}
