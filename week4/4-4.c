#include"4.h"
int main(){
   int d1,d2;
   char buf[5];
   memset(buf,0,5);
   d1 = open("test4.txt",O_RDONLY,0644);
   d2 = open("test4.txt",O_RDONLY,0644);
   read(d1,buf,5);
   printf("%s\n",buf);
   lseek(d1,1,SEEK_SET);
   memset(buf,0,5);
   read(d2,buf,5);
   printf("%s\n",buf);
   close(d1);
   close(d2);
}
