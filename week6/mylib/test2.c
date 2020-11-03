#include "../6.h"
#include <dlfcn.h>
#define LIBPATH "./libmylib2.so"
int main(){

  void *handle = dlopen(LIBPATH,RTLD_LAZY);
  if(handle == NULL){
   printf("error");
   return 0;
  }
  void (*inc)() = (void (*)())dlsym(handle,"xixixi");
  if(inc == NULL){
   printf("null");
   return 0;
  }
  inc();

}
