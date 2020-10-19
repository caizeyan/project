#include"4.h"
int main(int argc, char **argv){
  int n,from,to2;
  char buf[10];
  if(argc != 3){
    printf("Error");
    exit(1);
  }
  if( (from = open(argv[1],O_RDONLY)) < 0 ){
	printf("Error2"); 
   exit(1);
  }
  if((to2 = open(argv[2],O_WRONLY|O_CREAT|O_APPEND,0644)) < 0){
    	printf("Erro3");
	 exit(1);
  }
  while((n = read(from,buf,sizeof(buf))) > 0){
     write(to2,buf,n);
  }
  close(from);
  close(to2);
  return 0;
}
