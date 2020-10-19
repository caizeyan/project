#include"4.h"
int main(){
  int d1;
  char buf[10];
  buf[0] = '3';
  d1 = open("./out.info",O_CREAT|O_TRUNC|O_WRONLY,0644);
  d1 = dup(STDOUT_FILENO);
  write(d1,buf,1);
  printf("Redirect stdout file !\n");
   return 0;

}
