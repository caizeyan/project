#include "5.h"
int main(){
  char buf[20];
  int ret;
  FILE *fp = fopen("./tmp.txt","w+");
  if(!fp){
  printf("Fail to open file! \n");
  exit(-1);
  }
  ret = fwrite("123\n",sizeof("123\n"),1,fp);
  printf("write %d byte\n", ret);
  fseek(fp,0,SEEK_SET);
  memset(buf,0,sizeof(buf));
  ret = fread(buf,3,1,fp);
  printf("we read %s, ret is %d\n",buf,ret);
  fwrite("456",sizeof("456"),1,fp);
  fclose(fp);
  return 0;
}
