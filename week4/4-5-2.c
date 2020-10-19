#include"4.h"
int main(){
  int d1;
  d1 = open("./out.info",O_CREAT|O_TRUNC|O_WRONLY,0644);
  printf("%d",d1);
//  dup2(d1,1);
  printf("%d\n",d1);
  d1 = dup(STDOUT_FILENO);
  printf("%d\n",d1);
  printf("Redirect stdout file !\n");
   return 0;

}
