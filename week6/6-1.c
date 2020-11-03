#include "6.h"

static void __attribute__ ((destructor)) after(){
	printf("xixi\n");
}

static void __attribute__ ((constructor)) before(){
 	printf("haha\n");
}
static void __attribute__ ((constructor)) before_main(){
 	printf("before main\n");
}

int main(){
   printf("--main function--\n");
   return 0;
}
