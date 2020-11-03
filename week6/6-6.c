#include "6.h"

//char test_env[] ="test_env=test3";
static void set_env_string(void){
   // char *test_env = "test_env=test3";
    char test_env[] ="test_env=test3";  // the test_env will be delete after the function
   
  // if(putenv(test_env) != 0){
    if(setenv("test_env","test3",1)){ 
   printf("false");
  }else{
    printf("1. the test_env = %s\n",getenv("test_env"));
  }
}

static void show_env_string(){
    printf("2. the test_env = %s",getenv("test_env"));
}

int main(){
   set_env_string();
   show_env_string();
}
